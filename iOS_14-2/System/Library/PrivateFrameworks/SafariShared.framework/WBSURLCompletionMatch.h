/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem> {

	long long _matchLocation;
	NSString* _userInput;
	SFSearchResult* _sfSearchResultValue;
	long long _parsecQueryID;

}

@property (nonatomic,readonly) long long matchLocation;                               //@synthesize matchLocation=_matchLocation - In the implementation block
@property (nonatomic,readonly) BOOL matchLocationIsInURL; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (nonatomic,readonly) BOOL shouldPreload; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (assign,nonatomic) long long parsecQueryID;                                 //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(long long)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(BOOL)isTopHit;
-(id)userVisibleURLString;
-(id)originalURLString;
-(NSString *)description;
-(long long)parsecQueryID;
-(void)setParsecQueryID:(long long)arg1 ;
-(long long)matchLocation;
-(SFSearchResult *)sfSearchResultValue;
-(id)initWithMatchLocation:(long long)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 ;
-(NSString *)parsecDomainIdentifier;
-(BOOL)shouldPreload;
-(unsigned long long)engagementDestination;
-(BOOL)matchLocationIsInURL;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
-(id)title;
@end

