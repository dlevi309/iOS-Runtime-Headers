/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption {

	BOOL _usesDefaultPhoto;

}

@property (assign,nonatomic) BOOL usesDefaultPhoto;              //@synthesize usesDefaultPhoto=_usesDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionUsingDefaultPhoto:(BOOL)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(id)dailySnapshotKey;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)usesDefaultPhoto;
-(void)setUsesDefaultPhoto:(BOOL)arg1 ;
@end

