/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBundlePath:(NSString *)arg1 ;
-(NSString *)bundlePath;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(UIImage *)fetchedImage;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3 ;
@end

