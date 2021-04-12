/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(CLKDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(long long)swatchStyle;
-(NSString *)dailySnapshotKey;
-(NSString *)localizedNameForAction;
-(BOOL)isValidOption;
-(BOOL)optionExistsInDevice:(id)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
@end

