/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption {

	BOOL _isDefaultPhoto;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultPhoto;              //@synthesize isDefaultPhoto=_isDefaultPhoto - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDefaultPhoto;
@end

