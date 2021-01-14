/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INConnectedCall;


@protocol INStartCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * shouldDoEmergencyCountdown; 
@property (assign,nonatomic) long long confirmationReason; 
@property (nonatomic,copy) INConnectedCall * startedCall; 
@required
-(NSNumber *)shouldDoEmergencyCountdown;
-(void)setShouldDoEmergencyCountdown:(id)arg1;
-(void)setStartedCall:(id)arg1;
-(long long)confirmationReason;
-(void)setConfirmationReason:(long long)arg1;
-(long long)code;
-(INConnectedCall *)startedCall;

@end

