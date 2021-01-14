/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;
-(void)setCacheDelegateResponses:(BOOL)arg1 ;
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
-(void)setHostApplicationDelegate:(id<PVHostApplicationDelegate>)arg1 ;
-(id<PVHostApplicationDelegate>)hostApplicationDelegate;
-(BOOL)cacheDelegateResponses;
@end

