/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSURL, NSString, UIImage;

@interface _SFClipLink : NSObject {

	NSURL* _url;
	NSString* _bundleIdentifier;
	NSString* _clipName;
	NSString* _appName;
	NSString* _actionTitle;
	NSString* _actionCaption;
	UIImage* _icon;

}

@property (nonatomic,copy) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clipName;                      //@synthesize clipName=_clipName - In the implementation block
@property (nonatomic,copy) NSString * appName;                       //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                   //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSString * actionCaption;                 //@synthesize actionCaption=_actionCaption - In the implementation block
@property (nonatomic,retain) UIImage * icon;                         //@synthesize icon=_icon - In the implementation block
+(id)localizedCaptionForClipNamed:(id)arg1 action:(long long)arg2 ;
+(double)iconHeight;
+(id)localizedUppercaseStringForAction:(long long)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(UIImage *)icon;
-(NSString *)bundleIdentifier;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)actionTitle;
-(NSURL *)url;
-(NSString *)actionCaption;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)getClipAttributesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)clipName;
-(void)setClipName:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 actionTitle:(id)arg3 ;
-(NSString *)appName;
-(void)setActionCaption:(NSString *)arg1 ;
@end

