/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDMailUserSuggestionsEngagment;

@interface AWDMailSearchEngagement : PBCodable <NSCopying> {

	SCD_Struct_AW7* _atoms;
	unsigned long long _numSearchResults;
	NSMutableArray* _engagements;
	int _searchScope;
	AWDMailUserSuggestionsEngagment* _suggestionsEngagement;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) unsigned long long atomsCount; 
@property (nonatomic,readonly) int* atoms; 
@property (assign,nonatomic) BOOL hasSearchScope; 
@property (assign,nonatomic) int searchScope;                                                      //@synthesize searchScope=_searchScope - In the implementation block
@property (assign,nonatomic) BOOL hasNumSearchResults; 
@property (assign,nonatomic) unsigned long long numSearchResults;                                  //@synthesize numSearchResults=_numSearchResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * engagements;                                         //@synthesize engagements=_engagements - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionsEngagement; 
@property (nonatomic,retain) AWDMailUserSuggestionsEngagment * suggestionsEngagement;              //@synthesize suggestionsEngagement=_suggestionsEngagement - In the implementation block
+(Class)engagementsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int*)atoms;
-(void)setSearchScope:(int)arg1 ;
-(int)searchScope;
-(void)addAtoms:(int)arg1 ;
-(void)setSuggestionsEngagement:(AWDMailUserSuggestionsEngagment *)arg1 ;
-(void)setNumSearchResults:(unsigned long long)arg1 ;
-(id)initWithAtoms:(id)arg1 searchScope:(BOOL)arg2 suggestionsEngagement:(id)arg3 ;
-(void)addEngagements:(id)arg1 ;
-(unsigned long long)atomsCount;
-(void)clearAtoms;
-(int)atomsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)engagementsCount;
-(void)clearEngagements;
-(id)engagementsAtIndex:(unsigned long long)arg1 ;
-(void)setAtoms:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)atomsAsString:(int)arg1 ;
-(int)StringAsAtoms:(id)arg1 ;
-(void)setHasSearchScope:(BOOL)arg1 ;
-(BOOL)hasSearchScope;
-(id)searchScopeAsString:(int)arg1 ;
-(int)StringAsSearchScope:(id)arg1 ;
-(void)setHasNumSearchResults:(BOOL)arg1 ;
-(BOOL)hasNumSearchResults;
-(BOOL)hasSuggestionsEngagement;
-(unsigned long long)numSearchResults;
-(NSMutableArray *)engagements;
-(void)setEngagements:(NSMutableArray *)arg1 ;
-(AWDMailUserSuggestionsEngagment *)suggestionsEngagement;
@end

