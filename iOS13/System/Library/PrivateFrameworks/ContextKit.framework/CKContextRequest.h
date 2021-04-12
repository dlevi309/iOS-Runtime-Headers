/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKContextClient, NSString, NSDictionary, NSNumber;

@interface CKContextRequest : NSObject <NSSecureCoding> {

	CKContextClient* _client;
	BOOL _textIsRaw;
	BOOL _includeHigherLevelTopics;
	BOOL _prepareOnly;
	BOOL _debug;
	BOOL _dontSkip;
	BOOL _timing;
	BOOL _incPending;
	int _overrideConstellationMinCount;
	int _overrideConstellationMinWeight;
	unsigned _topk;
	NSString* _text;
	NSString* _title;
	NSString* _contentDescription;
	NSString* _contentKeywords;
	NSString* _contentAuthor;
	NSString* _url;
	NSString* _languageTag;
	NSDictionary* _itemIds;
	long long _maxConstellationTopics;
	NSNumber* _overrideBlendAlpha;
	NSNumber* _overrideBlendBeta;
	NSNumber* _overrideBlendGamma;
	unsigned long long _type;

}

@property (assign,nonatomic) BOOL prepareOnly;                                                         //@synthesize prepareOnly=_prepareOnly - In the implementation block
@property (assign,nonatomic) BOOL debug;                                                               //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL dontSkip;                                                            //@synthesize dontSkip=_dontSkip - In the implementation block
@property (assign,nonatomic) BOOL timing;                                                              //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendAlpha;                                            //@synthesize overrideBlendAlpha=_overrideBlendAlpha - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendBeta;                                             //@synthesize overrideBlendBeta=_overrideBlendBeta - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendGamma;                                            //@synthesize overrideBlendGamma=_overrideBlendGamma - In the implementation block
@property (assign,nonatomic) int overrideConstellationMinCount;                                        //@synthesize overrideConstellationMinCount=_overrideConstellationMinCount - In the implementation block
@property (assign,nonatomic) int overrideConstellationMinWeight;                                       //@synthesize overrideConstellationMinWeight=_overrideConstellationMinWeight - In the implementation block
@property (assign,nonatomic) unsigned topk;                                                            //@synthesize topk=_topk - In the implementation block
@property (assign,nonatomic) BOOL incPending;                                                          //@synthesize incPending=_incPending - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                  //@synthesize type=_type - In the implementation block
@property (setter=setText:,nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL textIsRaw;                                                           //@synthesize textIsRaw=_textIsRaw - In the implementation block
@property (setter=setTitle:,nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (setter=setContentDescription:,nonatomic,retain) NSString * contentDescription;              //@synthesize contentDescription=_contentDescription - In the implementation block
@property (setter=setContentKeywords:,nonatomic,retain) NSString * contentKeywords;                    //@synthesize contentKeywords=_contentKeywords - In the implementation block
@property (setter=setContentAuthor:,nonatomic,retain) NSString * contentAuthor;                        //@synthesize contentAuthor=_contentAuthor - In the implementation block
@property (nonatomic,retain) NSString * url;                                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * languageTag;                                                   //@synthesize languageTag=_languageTag - In the implementation block
@property (assign,nonatomic) BOOL includeHigherLevelTopics;                                            //@synthesize includeHigherLevelTopics=_includeHigherLevelTopics - In the implementation block
@property (nonatomic,retain) NSDictionary * itemIds;                                                   //@synthesize itemIds=_itemIds - In the implementation block
@property (assign,nonatomic) long long maxConstellationTopics;                                         //@synthesize maxConstellationTopics=_maxConstellationTopics - In the implementation block
+(void)initialize;
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)_xpcConnection;
+(void)statusWithReply:(/*^block*/id)arg1 ;
+(id)requestServiceSemaphore;
+(void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(unsigned long long)arg3 withReply:(/*^block*/id)arg4 ;
+(void)runOffMainThread:(/*^block*/id)arg1 ;
+(void)warmUpForRequestType:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
+(void)portraitBlacklistWithReply:(/*^block*/id)arg1 ;
+(id)_newXpcConnection;
+(void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(BOOL)arg4 inputLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7 ;
+(void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7 ;
+(void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5 ;
+(id)trimTextToSize:(id)arg1 ;
+(void)setDefaultRequestType:(unsigned long long)arg1 ;
+(void)findResultsForText:(id)arg1 withReply:(/*^block*/id)arg2 ;
+(void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(/*^block*/id)arg3 ;
+(void)prepareRequestForText:(id)arg1 withReply:(/*^block*/id)arg2 ;
+(void)findResponseByID:(id)arg1 withReply:(/*^block*/id)arg2 ;
+(id)requestWithText:(id)arg1 ;
+(BOOL)pingService;
+(BOOL)shutdownService;
+(id)frameworkStartDate;
-(id)init;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(NSString *)contentDescription;
-(id)execute;
-(void)setUrl:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)timing;
-(void)setTiming:(BOOL)arg1 ;
-(void)setContentDescription:(NSString *)arg1 ;
-(NSString *)languageTag;
-(void)setLanguageTag:(NSString *)arg1 ;
-(id)initForClient:(id)arg1 ;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(BOOL)incPending;
-(void)_executeWithReply:(/*^block*/id)arg1 ;
-(void)setPrepareOnly:(BOOL)arg1 ;
-(void)_postProcessResponse:(id)arg1 ;
-(void)executeWithReply:(/*^block*/id)arg1 ;
-(void)setContentKeywords:(NSString *)arg1 ;
-(void)setContentAuthor:(NSString *)arg1 ;
-(BOOL)textIsRaw;
-(void)setTextIsRaw:(BOOL)arg1 ;
-(NSString *)contentKeywords;
-(NSString *)contentAuthor;
-(BOOL)includeHigherLevelTopics;
-(void)setIncludeHigherLevelTopics:(BOOL)arg1 ;
-(NSDictionary *)itemIds;
-(void)setItemIds:(NSDictionary *)arg1 ;
-(long long)maxConstellationTopics;
-(void)setMaxConstellationTopics:(long long)arg1 ;
-(BOOL)prepareOnly;
-(BOOL)dontSkip;
-(void)setDontSkip:(BOOL)arg1 ;
-(NSNumber *)overrideBlendAlpha;
-(void)setOverrideBlendAlpha:(NSNumber *)arg1 ;
-(NSNumber *)overrideBlendBeta;
-(void)setOverrideBlendBeta:(NSNumber *)arg1 ;
-(NSNumber *)overrideBlendGamma;
-(void)setOverrideBlendGamma:(NSNumber *)arg1 ;
-(int)overrideConstellationMinCount;
-(void)setOverrideConstellationMinCount:(int)arg1 ;
-(int)overrideConstellationMinWeight;
-(void)setOverrideConstellationMinWeight:(int)arg1 ;
-(unsigned)topk;
-(void)setTopk:(unsigned)arg1 ;
-(void)setIncPending:(BOOL)arg1 ;
@end

