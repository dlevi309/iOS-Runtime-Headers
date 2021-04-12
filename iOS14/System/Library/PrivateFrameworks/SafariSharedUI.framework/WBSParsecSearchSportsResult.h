/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
-(NSArray *)individualScores;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
@end

