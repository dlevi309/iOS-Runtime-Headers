/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchMapsResult.h>

@protocol WBSParsecSearchSession;
@class WBSParsecSearchMapsResultFeedbackSender, NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult <WBSParsecSearchMapsResult> {

	id<WBSParsecSearchSession> _parsecSearchSession;
	WBSParsecSearchMapsResultFeedbackSender* _mapsFeedbackSender;

}

@property (nonatomic,retain) id<WBSParsecSearchSession> parsecSearchSession;                            //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (assign,nonatomic) long long parsecQueryID; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
@property (nonatomic,retain) WBSParsecSearchMapsResultFeedbackSender * mapsFeedbackSender;              //@synthesize mapsFeedbackSender=_mapsFeedbackSender - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id<WBSParsecSearchSession>)parsecSearchSession;
-(void)setParsecSearchSession:(id<WBSParsecSearchSession>)arg1 ;
-(WBSParsecSearchMapsResultFeedbackSender *)mapsFeedbackSender;
-(void)setMapsFeedbackSender:(WBSParsecSearchMapsResultFeedbackSender *)arg1 ;
@end

