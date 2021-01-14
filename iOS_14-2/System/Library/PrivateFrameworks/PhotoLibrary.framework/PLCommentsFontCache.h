/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@class UIFontDescriptor, UIFont;

@interface PLCommentsFontCache : NSObject {

	UIFontDescriptor* __shortCaptionFontDescriptor;
	UIFontDescriptor* __emphasizedShortCaptionFontDescriptor;
	UIFontDescriptor* __shortSubheadlineFontDescriptor;
	UIFontDescriptor* __bodyFontDescriptor;
	UIFontDescriptor* __emphasizedBodyFontDescriptor;
	UIFontDescriptor* __shortBodyFontDescriptor;

}

@property (nonatomic,readonly) UIFont * youLikeFont; 
@property (nonatomic,readonly) UIFont * likeFont; 
@property (nonatomic,readonly) UIFont * commentTextFont; 
@property (nonatomic,readonly) UIFont * commentAttributionDateFont; 
@property (nonatomic,readonly) UIFont * commentAttributionNameFont; 
@property (nonatomic,readonly) UIFont * commentEntryFont; 
@property (nonatomic,readonly) UIFont * commentSendButtonFont; 
+(id)sharedCache;
-(UIFont *)likeFont;
-(id)init;
-(UIFont *)youLikeFont;
-(UIFont *)commentTextFont;
-(UIFont *)commentAttributionDateFont;
-(UIFont *)commentAttributionNameFont;
-(UIFont *)commentEntryFont;
-(UIFont *)commentSendButtonFont;
-(void)_invalidateCache;
-(void)dealloc;
-(void)_contentSizesDidChange:(id)arg1 ;
-(id)_shortCaptionFontDescriptor;
-(id)_emphasizedShortCaptionFontDescriptor;
-(id)_shortSubheadlineFontDescriptor;
-(id)_bodyFontDescriptor;
-(id)_emphasizedBodyFontDescriptor;
-(id)_shortBodyFontDescriptor;
@end

