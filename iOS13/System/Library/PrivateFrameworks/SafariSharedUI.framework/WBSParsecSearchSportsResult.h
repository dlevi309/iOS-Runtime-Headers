/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchSportsResult.h>

@class WBSParsecSportsScoreSummary, WBSParsecSearchSportsAttributionExtraCompletionItem, NSArray, NSString;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult> {

	WBSParsecSportsScoreSummary* _scoreSummary;
	WBSParsecSearchSportsAttributionExtraCompletionItem* _extraCompletionItem;

}

@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,copy,readonly) NSArray * individualScores; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) WBSParsecSearchSportsAttributionExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
+(id)_specializedSchema;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
-(NSString *)subtitle;
-(NSArray *)individualScores;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
@end

