/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSString;

@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding> {

	UIImage* _fetchedImage;
	NSString* _imageName;
	NSString* _bundlePath;
	long long _activityCategory;

}

@property (nonatomic,copy) NSString * imageName;                      //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                     //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,nonatomic) long long activityCategory;              //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,readonly) UIImage * fetchedImage; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(UIImage *)fetchedImage;
-(id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3 ;
@end

