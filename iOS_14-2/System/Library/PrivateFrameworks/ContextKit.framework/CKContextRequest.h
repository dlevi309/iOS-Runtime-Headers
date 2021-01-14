/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <ContextKit/ContextKit-Structs.h>
#import <ContextKitExtraction/CKContextDonationItem.h>

@class CKContextClient, NSString, NSDictionary, NSSet, NSNumber, NSOrderedSet, NSArray;

@interface CKContextRequest : CKContextDonationItem {

	CKContextClient* _client;
	BOOL _textIsRaw;
	BOOL _includeHigherLevelTopics;
	BOOL _dontSkip;
	BOOL _timing;
	BOOL _overrideEnableCoreNLPTagging;
	BOOL _incPending;
	BOOL _debug;
	BOOL _includeRequestInResponse;
	int _overrideConstellationMinCount;
	int _overrideConstellationMinWeight;
	unsigned _topk;
	unsigned long long _type;
	NSString* _url;
	NSDictionary* _itemIds;
	long long _maxConstellationTopics;
	NSSet* _allowedTopicTypeTags;
	NSNumber* _overrideBlendAlpha;
	NSNumber* _overrideBlendBeta;
	NSNumber* _overrideBlendGamma;
	NSOrderedSet* _desiredLanguageTags;
	NSArray* _donorBundleIdentifiers;

}

@property (assign,nonatomic) BOOL dontSkip;                                                                                                //@synthesize dontSkip=_dontSkip - In the implementation block
@property (assign,nonatomic) BOOL timing;                                                                                                  //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendAlpha;                                                                                //@synthesize overrideBlendAlpha=_overrideBlendAlpha - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendBeta;                                                                                 //@synthesize overrideBlendBeta=_overrideBlendBeta - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendGamma;                                                                                //@synthesize overrideBlendGamma=_overrideBlendGamma - In the implementation block
@property (assign,nonatomic) int overrideConstellationMinCount;                                                                            //@synthesize overrideConstellationMinCount=_overrideConstellationMinCount - In the implementation block
@property (assign,nonatomic) int overrideConstellationMinWeight;                                                                           //@synthesize overrideConstellationMinWeight=_overrideConstellationMinWeight - In the implementation block
@property (assign,nonatomic) unsigned topk;                                                                                                //@synthesize topk=_topk - In the implementation block
@property (assign,nonatomic) BOOL overrideEnableCoreNLPTagging;                                                                            //@synthesize overrideEnableCoreNLPTagging=_overrideEnableCoreNLPTagging - In the implementation block
@property (getter=isRequestingContentFromActiveApplications,nonatomic,readonly) BOOL requestingContentFromActiveApplications; 
@property (assign,nonatomic) BOOL incPending;                                                                                              //@synthesize incPending=_incPending - In the implementation block
@property (assign,nonatomic) BOOL debug;                                                                                                   //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL includeRequestInResponse;                                                                                //@synthesize includeRequestInResponse=_includeRequestInResponse - In the implementation block
@property (nonatomic,retain) NSOrderedSet * desiredLanguageTags;                                                                           //@synthesize desiredLanguageTags=_desiredLanguageTags - In the implementation block
@property (assign,nonatomic,__weak) NSArray * donorBundleIdentifiers;                                                                      //@synthesize donorBundleIdentifiers=_donorBundleIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL textIsRaw;                                                                                               //@synthesize textIsRaw=_textIsRaw - In the implementation block
@property (nonatomic,retain) NSString * url;                                                                                               //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL includeHigherLevelTopics;                                                                                //@synthesize includeHigherLevelTopics=_includeHigherLevelTopics - In the implementation block
@property (nonatomic,retain) NSDictionary * itemIds;                                                                                       //@synthesize itemIds=_itemIds - In the implementation block
@property (assign,nonatomic) long long maxConstellationTopics;                                                                             //@synthesize maxConstellationTopics=_maxConstellationTopics - In the implementation block
@property (nonatomic,retain) NSSet * allowedTopicTypeTags;                                                                                 //@synthesize allowedTopicTypeTags=_allowedTopicTypeTags - In the implementation block
+(id)new;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5 ;
+(void)warmUpForRequestType:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
+(void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(/*^block*/id)arg3 ;
+(void)statusWithReply:(/*^block*/id)arg1 ;
+(id)requestServiceSemaphore;
+(void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(unsigned long long)arg3 withReply:(/*^block*/id)arg4 ;
+(id)requestWithText:(id)arg1 ;
+(void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 topicIds:(id)arg4 serverOverride:(BOOL)arg5 inputLength:(unsigned long long)arg6 requestType:(unsigned long long)arg7 logType:(unsigned long long)arg8 ;
+(BOOL)pingService;
+(void)setDefaultRequestType:(unsigned long long)arg1 ;
+(void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7 ;
+(void)runOffMainThread:(/*^block*/id)arg1 ;
+(BOOL)shutdownService;
+(void)findResultsForText:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(id)execute;
-(void)setDontSkip:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 ;
-(NSOrderedSet *)desiredLanguageTags;
-(BOOL)timing;
-(void)setIncludeHigherLevelTopics:(BOOL)arg1 ;
-(unsigned)topk;
-(id)init;
-(BOOL)includeHigherLevelTopics;
-(BOOL)dontSkip;
-(void)setTopk:(unsigned)arg1 ;
-(NSNumber *)overrideBlendBeta;
-(void)setOverrideBlendGamma:(NSNumber *)arg1 ;
-(void)setOverrideEnableCoreNLPTagging:(BOOL)arg1 ;
-(void)setTiming:(BOOL)arg1 ;
-(void)setDonorBundleIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(void)setTextIsRaw:(BOOL)arg1 ;
-(void)setText:(id)arg1 ;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(void)setAllowedTopicTypeTags:(NSSet *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setDesiredLanguageTags:(NSOrderedSet *)arg1 ;
-(NSString *)url;
-(id)initForClient:(id)arg1 ;
-(void)setIncludeRequestInResponse:(BOOL)arg1 ;
-(void)setOverrideConstellationMinWeight:(int)arg1 ;
-(BOOL)incPending;
-(BOOL)includeRequestInResponse;
-(int)overrideConstellationMinCount;
-(void)executeWithReply:(/*^block*/id)arg1 ;
-(void)_executeWithReply:(/*^block*/id)arg1 ;
-(void)_postProcessResponse:(id)arg1 ;
-(void)setOverrideBlendAlpha:(NSNumber *)arg1 ;
-(NSNumber *)overrideBlendGamma;
-(void)setItemIds:(NSDictionary *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)donorBundleIdentifiers;
-(int)overrideConstellationMinWeight;
-(BOOL)isRequestingContentFromActiveApplications;
-(void)setOverrideConstellationMinCount:(int)arg1 ;
-(BOOL)textIsRaw;
-(BOOL)debug;
-(NSDictionary *)itemIds;
-(void)setOverrideBlendBeta:(NSNumber *)arg1 ;
-(BOOL)overrideEnableCoreNLPTagging;
-(NSSet *)allowedTopicTypeTags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIncPending:(BOOL)arg1 ;
-(NSNumber *)overrideBlendAlpha;
-(long long)maxConstellationTopics;
-(void)setMaxConstellationTopics:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

