/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLKDevice, NSString;

@interface NTKEditOption : NSObject <NSSecureCoding> {

	CLKDevice* _device;

}

@property (nonatomic,readonly) long long swatchStyle; 
@property (nonatomic,readonly) CLKDevice * device;                             //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * dailySnapshotKey; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedNameForAction; 
+(BOOL)supportsSecureCoding;
+(CGSize)sizeForSwatchStyle:(long long)arg1 ;
+(id)optionsDescription;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(CLKDevice *)device;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)swatchStyle;
-(NSString *)dailySnapshotKey;
-(NSString *)localizedNameForAction;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(BOOL)optionExistsInDevice:(id)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
@end

