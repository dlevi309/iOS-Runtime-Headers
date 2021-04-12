/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CKDOperationInfoDelegate>)delegate;
-(void)setDelegate:(id<CKDOperationInfoDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)personaID;
-(void)setPersonaID:(NSString *)arg1 ;
-(void)performWithDelegate:(/*^block*/id)arg1 ;
@end

