/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(BOOL)isDefaultPhoto;
@end

