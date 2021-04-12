/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INGetCarPowerLevelStatusIntentResponseExport.h>

@class NSNumber, NSMeasurement, NSString;

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * fuelPercentRemaining; 
@property (nonatomic,copy) NSNumber * chargePercentRemaining; 
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (nonatomic,copy) NSNumber * charging; 
@property (nonatomic,copy) NSNumber * minutesToFull; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertiesByName;
-(id)_dictionaryRepresentation;
-(NSMeasurement *)distanceRemaining;
-(void)setDistanceRemaining:(NSMeasurement *)arg1 ;
-(NSNumber *)charging;
-(void)setCharging:(NSNumber *)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(NSNumber *)arg1 ;
-(NSNumber *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(NSNumber *)arg1 ;
-(NSNumber *)minutesToFull;
-(void)setMinutesToFull:(NSNumber *)arg1 ;
@end

