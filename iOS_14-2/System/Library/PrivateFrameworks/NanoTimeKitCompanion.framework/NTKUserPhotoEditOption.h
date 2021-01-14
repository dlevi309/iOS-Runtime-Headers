/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption {

	BOOL _usesDefaultPhoto;

}

@property (assign,nonatomic) BOOL usesDefaultPhoto;              //@synthesize usesDefaultPhoto=_usesDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionUsingDefaultPhoto:(BOOL)arg1 forDevice:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dailySnapshotKey;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)usesDefaultPhoto;
-(void)setUsesDefaultPhoto:(BOOL)arg1 ;
@end

