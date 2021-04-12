/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (assign,nonatomic) long long parsecQueryID;                                 //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
@property (nonatomic,readonly) NSString * lastSearchQuery; 
@property (nonatomic,retain) WBSQuerySuggestion * siriSuggestion; 
+(long long)matchLocationForString:(id)arg1 inURLString:(id)arg2 ;
+(long long)matchLocationForString:(id)arg1 inTitle:(id)arg2 ;
-(NSString *)description;
-(id)title;
-(id)originalURLString;
-(long long)parsecQueryID;
-(void)setParsecQueryID:(long long)arg1 ;
-(id)userVisibleURLString;
-(id)initWithMatchLocation:(long long)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 ;
-(NSString *)parsecDomainIdentifier;
-(long long)matchLocation;
-(BOOL)shouldPreload;
-(BOOL)isTopHit;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
-(BOOL)matchLocationIsInURL;
-(id)matchingStringWithUserTypedPrefix:(id)arg1 ;
@end

