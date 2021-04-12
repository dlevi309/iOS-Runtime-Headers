/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <SearchFoundation/SFResultSection.h>

@class NSArray, NSString, NSNumber, NSMutableOrderedSet, SPGroupHeadingResult;

@interface SFMutableResultSection : SFResultSection {

	BOOL _doNotFold;
	BOOL _pinToTop;
	BOOL _serialized;
	BOOL _isGlanceCategory;
	unsigned _domain;
	int _source;
	NSArray* _hiddenExtResults;
	NSString* _groupName;
	NSNumber* _groupId;
	NSMutableOrderedSet* _resultSet;
	SPGroupHeadingResult* _headerResult;
	NSString* _relatedSectionBundleIdentifier;
	NSString* _sourceDomain;
	NSString* _resultSetIdentifier;

}

@property (nonatomic,retain) NSString * groupName;                                   //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSNumber * groupId;                                     //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * resultSet;                        //@synthesize resultSet=_resultSet - In the implementation block
@property (nonatomic,retain) SPGroupHeadingResult * headerResult;                    //@synthesize headerResult=_headerResult - In the implementation block
@property (assign) BOOL doNotFold;                                                   //@synthesize doNotFold=_doNotFold - In the implementation block
@property (assign,nonatomic) unsigned domain;                                        //@synthesize domain=_domain - In the implementation block
@property (assign) BOOL pinToTop;                                                    //@synthesize pinToTop=_pinToTop - In the implementation block
@property (nonatomic,retain) NSString * relatedSectionBundleIdentifier;              //@synthesize relatedSectionBundleIdentifier=_relatedSectionBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * hiddenExtResults;                             //@synthesize hiddenExtResults=_hiddenExtResults - In the implementation block
@property (assign) int source;                                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceDomain;                                //@synthesize sourceDomain=_sourceDomain - In the implementation block
@property (nonatomic,retain) NSString * resultSetIdentifier;                         //@synthesize resultSetIdentifier=_resultSetIdentifier - In the implementation block
@property (assign,nonatomic) BOOL serialized;                                        //@synthesize serialized=_serialized - In the implementation block
@property (assign,nonatomic) BOOL isGlanceCategory;                                  //@synthesize isGlanceCategory=_isGlanceCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResults:(id)arg1 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(id)results;
-(id)initWithPrototype:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(void)replaceResultsAtIndex:(unsigned long long)arg1 withResults:(id)arg2 ;
-(void)setHeaderResult:(SPGroupHeadingResult *)arg1 ;
-(void)moveResultsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setGroupName:(NSString *)arg1 ;
-(BOOL)serialized;
-(NSString *)groupName;
-(NSNumber *)groupId;
-(BOOL)pinToTop;
-(SPGroupHeadingResult *)headerResult;
-(void)removeResultsInArray:(id)arg1 ;
-(NSString *)resultSetIdentifier;
-(void)clearResults;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDoNotFold:(BOOL)arg1 ;
-(void)setHiddenExtResults:(NSArray *)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(unsigned)domain;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)addResults:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeResultsAtIndex:(unsigned long long)arg1 ;
-(void)setSource:(int)arg1 ;
-(void)addResults:(id)arg1 ;
-(void)setSourceDomain:(NSString *)arg1 ;
-(id)description;
-(id)copy;
-(BOOL)isGlanceCategory;
-(void)setRelatedSectionBundleIdentifier:(NSString *)arg1 ;
-(void)removeResults:(id)arg1 ;
-(void)setGroupId:(NSNumber *)arg1 ;
-(void)removeResultsInRange:(NSRange)arg1 ;
-(id)objectForFeedback;
-(unsigned long long)resultsCount;
-(id)objectForFeedbackWithResultsArray:(id)arg1 ;
-(void)setIsGlanceCategory:(BOOL)arg1 ;
-(void)setResultSet:(NSMutableOrderedSet *)arg1 ;
-(NSArray *)hiddenExtResults;
-(id)copySectionRemovingResults:(id)arg1 ;
-(void)setSerialized:(BOOL)arg1 ;
-(NSMutableOrderedSet *)resultSet;
-(NSString *)sourceDomain;
-(id)mutableDeepCopy;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResultSection:(id)arg1 ;
-(void)setResultSetIdentifier:(NSString *)arg1 ;
-(void)addHiddenExtResult:(id)arg1 ;
-(NSString *)relatedSectionBundleIdentifier;
-(void)addResultsFromArray:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(BOOL)doNotFold;
-(void)setPinToTop:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)source;
@end

