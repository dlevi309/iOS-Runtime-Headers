/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/PVHostApplicationDelegate.h>

@protocol PVHostApplicationDelegate;
@class NSString;

@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate> {

	BOOL _cacheDelegateResponses;
	id<PVHostApplicationDelegate> _hostApplicationDelegate;

}

@property (nonatomic,retain) id<PVHostApplicationDelegate> hostApplicationDelegate;              //@synthesize hostApplicationDelegate=_hostApplicationDelegate - In the implementation block
@property (assign,nonatomic) BOOL cacheDelegateResponses;                                        //@synthesize cacheDelegateResponses=_cacheDelegateResponses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)effectTemplatesDirectoryName;
-(id)effectTemplatesBundle;
-(BOOL)wantsExtraLineSpacingForDiacritics;
-(BOOL)wantsDynamicLineSpacingForDiacritics;
-(BOOL)wantsToScaleEmojiToCapHeight;
-(BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
-(BOOL)wantsToUseBinarySearchForScalingToBothMargins;
-(BOOL)wantsToLimitLinesOfText;
-(unsigned)getNumberOfLinesToLimitTextTo;
-(BOOL)wantsToImproveQualityOfDraftQualityText;
-(BOOL)wantsToDownscaleGlyphsToOutputSize;
-(BOOL)wantsToSetTranscriptionsUsingArray;
-(BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
-(BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
-(BOOL)wantsToUseCachedTextureForText;
-(BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
-(BOOL)wantsToIncludeTrackingValueInAttributedString;
-(BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
-(BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
-(BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
-(BOOL)wantsToCacheTopLevelGroupRender;
-(unsigned)getMaxGlyphResolution;
-(id<PVHostApplicationDelegate>)hostApplicationDelegate;
-(void)setHostApplicationDelegate:(id<PVHostApplicationDelegate>)arg1 ;
-(BOOL)cacheDelegateResponses;
-(void)setCacheDelegateResponses:(BOOL)arg1 ;
@end

