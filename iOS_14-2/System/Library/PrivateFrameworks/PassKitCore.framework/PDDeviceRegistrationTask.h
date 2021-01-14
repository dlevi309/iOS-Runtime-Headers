/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject {

	BOOL _shouldForceApplePay;
	BOOL _shouldForcePeerPayment;
	NSMutableArray* _completionHandlers;
	NSString* _reason;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldForceApplePay;                         //@synthesize shouldForceApplePay=_shouldForceApplePay - In the implementation block
@property (assign,nonatomic) BOOL shouldForcePeerPayment;                      //@synthesize shouldForcePeerPayment=_shouldForcePeerPayment - In the implementation block
-(id)init;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSString *)reason;
-(NSMutableArray *)completionHandlers;
-(BOOL)shouldForceApplePay;
-(void)setShouldForceApplePay:(BOOL)arg1 ;
-(BOOL)shouldForcePeerPayment;
-(void)setShouldForcePeerPayment:(BOOL)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

