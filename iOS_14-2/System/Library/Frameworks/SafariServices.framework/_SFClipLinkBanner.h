/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFLinkBanner.h>
#import <libobjc.A.dylib/_SFAppSuggestionBanner.h>

@protocol _SFAppSuggestionBannerDelegate;
@class _SFClipLink, NSString;

@interface _SFClipLinkBanner : _SFLinkBanner <_SFAppSuggestionBanner> {

	id<_SFAppSuggestionBannerDelegate> delegate;
	_SFClipLink* _clipLink;

}

@property (nonatomic,readonly) _SFClipLink * clipLink;                                        //@synthesize clipLink=_clipLink - In the implementation block
@property (assign,nonatomic,__weak) id<_SFAppSuggestionBannerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getClipLinkBannerForClipLink:(id)arg1 openActionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<_SFAppSuggestionBannerDelegate>)delegate;
-(void)setDelegate:(id<_SFAppSuggestionBannerDelegate>)arg1 ;
-(id)_initWithClipLink:(id)arg1 openActionHandler:(/*^block*/id)arg2 ;
-(_SFClipLink *)clipLink;
@end

