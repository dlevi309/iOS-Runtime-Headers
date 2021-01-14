/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <SpotlightServices/SFSearchResult_SpotlightExtras.h>

@class SFSearchSuggestion, NSArray;

@interface SPSearchSuggestionResult : SFSearchResult_SpotlightExtras {

	SFSearchSuggestion* _suggestion;
	NSArray* _searchEntities;

}

@property (nonatomic,readonly) SFSearchSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) NSArray * searchEntities;                       //@synthesize searchEntities=_searchEntities - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_richDisplayTextForSuggestion:(id)arg1 forQuery:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SFSearchSuggestion *)suggestion;
-(NSArray *)searchEntities;
-(void)setSearchEntities:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSearchSuggestion:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4 ;
@end

