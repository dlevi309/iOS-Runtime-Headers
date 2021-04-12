/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIImage, NSString, NSDate;

@interface NSSArticleInternal : NSObject <NSCoding> {

	UIImage* _thumbnailImage;
	UIImage* _publisherLogoImage;
	UIImage* _publisherLogoMaskImage;
	NSString* _title;
	NSString* _shortExcerpt;
	NSDate* _publishDate;
	NSString* _publisherName;

}

@property (nonatomic,readonly) UIImage * thumbnailImage;                      //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,readonly) UIImage * publisherLogoImage;                  //@synthesize publisherLogoImage=_publisherLogoImage - In the implementation block
@property (nonatomic,readonly) UIImage * publisherLogoMaskImage;              //@synthesize publisherLogoMaskImage=_publisherLogoMaskImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * shortExcerpt;                       //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,readonly) NSDate * publishDate;                          //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,readonly) NSString * publisherName;                      //@synthesize publisherName=_publisherName - In the implementation block
+(id)imageWithURL:(id)arg1 ;
+(void)articleFromNotificationUserInfo:(id)arg1 thumbnailFileURL:(id)arg2 publisherLogoFileURL:(id)arg3 publisherLogoMaskFileURL:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_articleFromCoreSpotlightIdentifier:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)articleFromNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)coreSpotlightIdentifierRepresentsArticleIdentifier:(id)arg1 ;
+(void)articleFromCoreSpotlightIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSDate *)publishDate;
-(UIImage *)thumbnailImage;
-(NSString *)shortExcerpt;
-(NSString *)publisherName;
-(UIImage *)publisherLogoMaskImage;
-(UIImage *)publisherLogoImage;
-(id)initWithThumbnailImage:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 publishDate:(id)arg4 publisherName:(id)arg5 publisherLogoImage:(id)arg6 publisherLogoMaskImage:(id)arg7 ;
@end

