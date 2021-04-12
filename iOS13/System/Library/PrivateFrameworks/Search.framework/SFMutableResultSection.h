/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <SearchFoundation/SFResultSection.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableOrderedSet, NSString;

@interface SFMutableResultSection : SFResultSection <NSCopying> {

	BOOL _doNotFold;
	BOOL _pinToTop;
	BOOL _serialized;
	BOOL _isGlanceCategory;
	int _source;
	unsigned _domain;
	NSArray* _hiddenExtResults;
	NSMutableOrderedSet* _resultSet;
	NSString* _sourceDomain;
	NSString* _resultSetIdentifier;

}

@property (nonatomic,retain) NSMutableOrderedSet * resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
@property (nonatomic,retain) NSArray * hiddenExtResults;                   //@synthesize hiddenExtResults=_hiddenExtResults - In the implementation block
@property (assign) BOOL doNotFold;                                         //@synthesize doNotFold=_doNotFold - In the implementation block
@property (assign) BOOL pinToTop;                                          //@synthesize pinToTop=_pinToTop - In the implementation block
@property (assign) int source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceDomain;                      //@synthesize sourceDomain=_sourceDomain - In the implementation block
@property (nonatomic,retain) NSString * resultSetIdentifier;               //@synthesize resultSetIdentifier=_resultSetIdentifier - In the implementation block
@property (assign,nonatomic) unsigned domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL serialized;                              //@synthesize serialized=_serialized - In the implementation block
@property (assign,nonatomic) BOOL isGlanceCategory;                        //@synthesize isGlanceCategory=_isGlanceCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(unsigned)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(int)source;
-(id)results;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(void)setResults:(id)arg1 ;
-(void)setSerialized:(BOOL)arg1 ;
-(BOOL)serialized;
-(void)addResults:(id)arg1 ;
-(void)clearResults;
-(unsigned long long)resultsCount;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
-(BOOL)doNotFold;
-(void)setDoNotFold:(BOOL)arg1 ;
-(NSMutableOrderedSet *)resultSet;
-(void)setResultSet:(NSMutableOrderedSet *)arg1 ;
-(id)objectForFeedback;
-(id)objectForFeedbackWithResultsArray:(id)arg1 ;
-(void)addHiddenExtResult:(id)arg1 ;
-(NSArray *)hiddenExtResults;
-(id)initWithResultSection:(id)arg1 ;
-(void)addResultsFromArray:(id)arg1 ;
-(void)addResults:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeResultsAtIndex:(unsigned long long)arg1 ;
-(void)removeResultsInRange:(NSRange)arg1 ;
-(void)removeResults:(id)arg1 ;
-(void)removeResultsInArray:(id)arg1 ;
-(void)replaceResultsAtIndex:(unsigned long long)arg1 withResults:(id)arg2 ;
-(void)setHiddenExtResults:(NSArray *)arg1 ;
-(BOOL)pinToTop;
-(void)setPinToTop:(BOOL)arg1 ;
-(NSString *)sourceDomain;
-(void)setSourceDomain:(NSString *)arg1 ;
-(NSString *)resultSetIdentifier;
-(void)setResultSetIdentifier:(NSString *)arg1 ;
-(BOOL)isGlanceCategory;
-(void)setIsGlanceCategory:(BOOL)arg1 ;
@end

