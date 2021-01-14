/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _screen_name;
	NSString* _profile_image_url;
	UIImage* _profileImageCache;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * screen_name;                    //@synthesize screen_name=_screen_name - In the implementation block
@property (nonatomic,retain) NSString * profile_image_url;              //@synthesize profile_image_url=_profile_image_url - In the implementation block
@property (retain) UIImage * profileImageCache;                         //@synthesize profileImageCache=_profileImageCache - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(UIImage *)profileImageCache;
-(NSString *)screen_name;
-(void)setProfileImageCache:(UIImage *)arg1 ;
-(void)setScreen_name:(NSString *)arg1 ;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setProfile_image_url:(NSString *)arg1 ;
-(NSString *)profile_image_url;
@end

