/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSiriSuggestion:(id)arg1;
-(NSString *)lastSearchQuery;
-(WBSQuerySuggestion *)siriSuggestion;

@required
-(long long)parsecQueryID;
-(void)setParsecQueryID:(long long)arg1;
-(SFSearchResult *)sfSearchResultValue;
-(NSString *)parsecDomainIdentifier;
-(unsigned long long)engagementDestination;

@end

