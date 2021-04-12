/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class NSString, SFSearchResult, WBSQuerySuggestion;


@protocol WBSCompletionListItem <NSObject>
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (assign,nonatomic) long long parsecQueryID; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
@optional
-(NSString *)lastSearchQuery;
-(WBSQuerySuggestion *)siriSuggestion;
-(void)setSiriSuggestion:(id)arg1;

@required
-(long long)parsecQueryID;
-(void)setParsecQueryID:(long long)arg1;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;

@end

