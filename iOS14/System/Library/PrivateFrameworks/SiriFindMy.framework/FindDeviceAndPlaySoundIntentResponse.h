/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
*/

#import <Intents/INIntentResponse.h>

@class NSNumber;

@interface FindDeviceAndPlaySoundIntentResponse : INIntentResponse {

	 code;

}

@property (retain,nonatomic) NSNumber * needsConfirmPlaySound; 
@property (assign,nonatomic) long long code; 
-(id)init;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(id)initWithPropertiesByName:(id)arg1 ;
@end

