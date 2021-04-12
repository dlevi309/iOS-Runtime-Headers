/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)_invalidateCache;
-(void)_contentSizesDidChange:(id)arg1 ;
-(id)_shortCaptionFontDescriptor;
-(id)_emphasizedShortCaptionFontDescriptor;
-(id)_shortSubheadlineFontDescriptor;
-(id)_bodyFontDescriptor;
-(id)_emphasizedBodyFontDescriptor;
-(id)_shortBodyFontDescriptor;
-(UIFont *)youLikeFont;
-(UIFont *)likeFont;
-(UIFont *)commentTextFont;
-(UIFont *)commentAttributionDateFont;
-(UIFont *)commentAttributionNameFont;
-(UIFont *)commentEntryFont;
-(UIFont *)commentSendButtonFont;
@end

