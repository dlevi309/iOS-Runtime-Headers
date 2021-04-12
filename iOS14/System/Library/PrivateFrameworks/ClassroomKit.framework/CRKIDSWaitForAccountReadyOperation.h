/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@protocol CRKIDSLocalPrimitives, CRKIDSListener;
@class NSString;

@interface CRKIDSWaitForAccountReadyOperation : CATOperation {

	id<CRKIDSLocalPrimitives> _IDSLocalPrimitives;
	NSString* _sourceAppleID;
	id<CRKIDSListener> _accountAdditionListener;
	id<CRKIDSListener> _accountActiveListener;

}

@property (nonatomic,readonly) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;              //@synthesize IDSLocalPrimitives=_IDSLocalPrimitives - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppleID;                             //@synthesize sourceAppleID=_sourceAppleID - In the implementation block
@property (nonatomic,retain) id<CRKIDSListener> accountAdditionListener;                  //@synthesize accountAdditionListener=_accountAdditionListener - In the implementation block
@property (nonatomic,retain) id<CRKIDSListener> accountActiveListener;                    //@synthesize accountActiveListener=_accountActiveListener - In the implementation block
-(BOOL)isAsynchronous;
-(void)main;
-(void)cancel;
-(id<CRKIDSLocalPrimitives>)IDSLocalPrimitives;
-(NSString *)sourceAppleID;
-(id<CRKIDSListener>)accountActiveListener;
-(id<CRKIDSListener>)accountAdditionListener;
-(void)accountDidBecomeKnownToService:(id)arg1 ;
-(void)setAccountAdditionListener:(id<CRKIDSListener>)arg1 ;
-(void)accountDidBecomeActive:(id)arg1 ;
-(void)setAccountActiveListener:(id<CRKIDSListener>)arg1 ;
-(id)initWithIDSLocalPrimitives:(id)arg1 sourceAppleID:(id)arg2 ;
@end

