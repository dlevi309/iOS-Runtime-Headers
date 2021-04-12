/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDOperationInfoDelegate;
@class NSString;

@interface CKDOperationInfoDelegateWrapper : NSObject {

	id<CKDOperationInfoDelegate> _delegate;
	NSString* _personaID;

}

@property (assign,nonatomic,__weak) id<CKDOperationInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                        //@synthesize personaID=_personaID - In the implementation block
-(void)setPersonaID:(NSString *)arg1 ;
-(id<CKDOperationInfoDelegate>)delegate;
-(NSString *)personaID;
-(void)setDelegate:(id<CKDOperationInfoDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)performWithDelegate:(/*^block*/id)arg1 ;
@end

