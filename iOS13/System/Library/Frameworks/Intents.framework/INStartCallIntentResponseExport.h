/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber;


@protocol INStartCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * shouldDoEmergencyCountdown; 
@property (assign,nonatomic) long long confirmationReason; 
@required
-(long long)code;
-(long long)confirmationReason;
-(void)setConfirmationReason:(long long)arg1;
-(NSNumber *)shouldDoEmergencyCountdown;
-(void)setShouldDoEmergencyCountdown:(id)arg1;

@end

