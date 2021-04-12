/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDictionary;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _fetchAttributes;
	unsigned short _flags;
	int _rankingType;
	unsigned _completionOptions;
	unsigned _qos;
	NSString* _clientBundleID;
	NSArray* _protectionClasses;
	NSArray* _bundleIDs;
	NSArray* _rankingQueries;
	NSArray* _preferredLanguages;
	NSString* _keyboardLanguage;
	NSArray* _markedTextArray;
	NSArray* _disableBundles;
	NSString* _userQuery;
	NSArray* _filterQueries;
	NSString* _filterQuery;
	long long _strongRankingQueryCount;
	long long _dominantRankingQueryCount;
	long long _dominatedRankingQueryCount;
	long long _maxCount;
	long long _completionResultCount;
	long long _queryID;
	NSString* _completionString;
	NSArray* _completionAttributes;
	NSArray* _completionWeights;
	double _currentTime;
	NSArray* _mountPoints;
	NSArray* _scopes;
	T _fuzzyMask;
	T _fuzzyMatch;

}

@property (assign,nonatomic) unsigned short flags;                              //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned qos;                                      //@synthesize qos=_qos - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                         //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) NSArray * fetchAttributes; 
@property (nonatomic,retain) NSArray * protectionClasses;                       //@synthesize protectionClasses=_protectionClasses - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                               //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * rankingQueries;                          //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguages;                      //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;                       //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSArray * markedTextArray;                         //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,retain) NSArray * disableBundles;                          //@synthesize disableBundles=_disableBundles - In the implementation block
@property (nonatomic,retain) NSString * userQuery;                              //@synthesize userQuery=_userQuery - In the implementation block
@property (assign,nonatomic) int rankingType;                                   //@synthesize rankingType=_rankingType - In the implementation block
@property (nonatomic,copy) NSArray * filterQueries;                             //@synthesize filterQueries=_filterQueries - In the implementation block
@property (nonatomic,retain) NSString * filterQuery;                            //@synthesize filterQuery=_filterQuery - In the implementation block
@property (assign,nonatomic) long long strongRankingQueryCount;                 //@synthesize strongRankingQueryCount=_strongRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long dominantRankingQueryCount;               //@synthesize dominantRankingQueryCount=_dominantRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long dominatedRankingQueryCount;              //@synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount - In the implementation block
@property (assign,nonatomic) long long maxCount;                                //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) long long completionResultCount;                   //@synthesize completionResultCount=_completionResultCount - In the implementation block
@property (assign,nonatomic) long long queryID;                                 //@synthesize queryID=_queryID - In the implementation block
@property (assign,nonatomic) BOOL internal; 
@property (assign,nonatomic) BOOL grouped; 
@property (assign,nonatomic) BOOL live; 
@property (assign,nonatomic) BOOL counting; 
@property (assign,nonatomic) BOOL attribute; 
@property (assign,nonatomic) BOOL lowPriority; 
@property (assign,nonatomic) BOOL parseUserQuery; 
@property (assign,nonatomic) BOOL fsOnly; 
@property (assign,nonatomic) BOOL playback; 
@property (assign,nonatomic) BOOL includeUserActivities; 
@property (assign,nonatomic) T fuzzyMask;                                       //@synthesize fuzzyMask=_fuzzyMask - In the implementation block
@property (assign,nonatomic) T fuzzyMatch;                                      //@synthesize fuzzyMatch=_fuzzyMatch - In the implementation block
@property (nonatomic,retain) NSString * completionString;                       //@synthesize completionString=_completionString - In the implementation block
@property (nonatomic,retain) NSArray * completionAttributes;                    //@synthesize completionAttributes=_completionAttributes - In the implementation block
@property (nonatomic,retain) NSArray * completionWeights;                       //@synthesize completionWeights=_completionWeights - In the implementation block
@property (assign,nonatomic) unsigned completionOptions;                        //@synthesize completionOptions=_completionOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * options; 
@property (assign,nonatomic) double currentTime;                                //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSArray * mountPoints;                             //@synthesize mountPoints=_mountPoints - In the implementation block
@property (nonatomic,retain) NSArray * scopes;                                  //@synthesize scopes=_scopes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInternal:(BOOL)arg1 ;
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(id)xpc_dictionary;
-(NSString *)clientBundleID;
-(NSArray *)scopes;
-(void)setDominantRankingQueryCount:(long long)arg1 ;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(long long)dominantRankingQueryCount;
-(NSArray *)filterQueries;
-(BOOL)live;
-(void)setUserQuery:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(void)setProtectionClasses:(NSArray *)arg1 ;
-(void)setFsOnly:(BOOL)arg1 ;
-(void)setFilterQueries:(NSArray *)arg1 ;
-(BOOL)grouped;
-(id)init;
-(void)setLowPriority:(BOOL)arg1 ;
-(int)rankingType;
-(NSArray *)rankingQueries;
-(BOOL)counting;
-(NSArray *)protectionClasses;
-(void)setScopes:(NSArray *)arg1 ;
-(NSArray *)preferredLanguages;
-(NSArray *)fetchAttributes;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)completionString;
-(unsigned short)flags;
-(void)setCurrentTime:(double)arg1 ;
-(void)setCounting:(BOOL)arg1 ;
-(BOOL)attribute;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)internal;
-(id)debugDescription;
-(void)setCompletionWeights:(NSArray *)arg1 ;
-(NSDictionary *)options;
-(void)setFuzzyMask:(T)arg1 ;
-(BOOL)includeUserActivities;
-(BOOL)playback;
-(void)setCompletionOptions:(unsigned)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setMarkedTextArray:(NSArray *)arg1 ;
-(NSArray *)completionWeights;
-(NSString *)userQuery;
-(unsigned)completionOptions;
-(void)setAttribute:(BOOL)arg1 ;
-(void)setMountPoints:(NSArray *)arg1 ;
-(double)currentTime;
-(id)description;
-(void)setDominatedRankingQueryCount:(long long)arg1 ;
-(BOOL)fsOnly;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(void)setLive:(BOOL)arg1 ;
-(T)fuzzyMask;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)setParseUserQuery:(BOOL)arg1 ;
-(void)setFuzzyMatch:(T)arg1 ;
-(BOOL)lowPriority;
-(void)setCompletionResultCount:(long long)arg1 ;
-(T)fuzzyMatch;
-(void)setFlags:(unsigned short)arg1 ;
-(NSArray *)disableBundles;
-(id)initWithCoder:(id)arg1 ;
-(long long)completionResultCount;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(long long)strongRankingQueryCount;
-(BOOL)parseUserQuery;
-(NSArray *)markedTextArray;
-(NSArray *)completionAttributes;
-(void)setCompletionAttributes:(NSArray *)arg1 ;
-(long long)dominatedRankingQueryCount;
-(void)setDisableBundles:(NSArray *)arg1 ;
-(void)setFetchAttributes:(NSArray *)arg1 ;
-(void)setQueryID:(long long)arg1 ;
-(id)initWithQoS:(unsigned)arg1 ;
-(void)setPlayback:(BOOL)arg1 ;
-(long long)queryID;
-(void)setStrongRankingQueryCount:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilterQuery:(NSString *)arg1 ;
-(void)setRankingType:(int)arg1 ;
-(void)setCompletionString:(NSString *)arg1 ;
-(NSString *)filterQuery;
-(NSArray *)mountPoints;
-(void)setIncludeUserActivities:(BOOL)arg1 ;
-(void)setGrouped:(BOOL)arg1 ;
@end

