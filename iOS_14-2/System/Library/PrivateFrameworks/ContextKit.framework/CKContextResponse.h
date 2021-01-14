/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSError, NSDate, CKContextRequest;

@interface CKContextResponse : NSObject <NSSecureCoding> {

	BOOL _discarded;
	double _hideCompletionsTimeLimit;
	AB _shown;
	AB _engaged;
	AB _transactionSuccessful;
	AB _shownLogged;
	AB _engagementLogged;
	AB _transactionLogged;
	NSArray* _loggingCouldHaveShown;
	AI _loggingShownMax;
	AB _loggingServerOverride;
	AI _loggingCouldHaveShownMax;
	AI _loggingInputLengthMax;
	BOOL _resultsNeedFiltering;
	NSString* _uuid;
	NSError* _error;
	NSArray* _results;
	NSArray* _level1Topics;
	NSArray* _level2Topics;
	NSArray* _donorBundleIdentifiers;
	NSString* _languageTag;
	NSString* _debug;
	unsigned long long _requestType;
	unsigned long long _mustPrefixMatchLength;
	NSDate* _hideCompletionsAfterDate;
	NSDate* _responseDate;
	CKContextRequest* _debugRequest;

}

@property (assign,nonatomic) BOOL resultsNeedFiltering;                             //@synthesize resultsNeedFiltering=_resultsNeedFiltering - In the implementation block
@property (assign,nonatomic) unsigned long long mustPrefixMatchLength;              //@synthesize mustPrefixMatchLength=_mustPrefixMatchLength - In the implementation block
@property (nonatomic,retain) NSDate * hideCompletionsAfterDate;                     //@synthesize hideCompletionsAfterDate=_hideCompletionsAfterDate - In the implementation block
@property (nonatomic,retain) NSDate * responseDate;                                 //@synthesize responseDate=_responseDate - In the implementation block
@property (nonatomic,retain) CKContextRequest * debugRequest;                       //@synthesize debugRequest=_debugRequest - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * results;                                     //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSArray * level1Topics;                                //@synthesize level1Topics=_level1Topics - In the implementation block
@property (nonatomic,retain) NSArray * level2Topics;                                //@synthesize level2Topics=_level2Topics - In the implementation block
@property (nonatomic,retain) NSArray * donorBundleIdentifiers;                      //@synthesize donorBundleIdentifiers=_donorBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * languageTag;                                //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,retain) NSString * debug;                                      //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                        //@synthesize requestType=_requestType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(void)setRequestType:(unsigned long long)arg1 ;
-(NSString *)uuid;
-(BOOL)isPlaceholder;
-(unsigned long long)requestType;
-(void)setResponseDate:(NSDate *)arg1 ;
-(void)setDonorBundleIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDebug:(NSString *)arg1 ;
-(void)discard;
-(NSString *)languageTag;
-(void)setError:(NSError *)arg1 ;
-(id)completer;
-(NSError *)error;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)donorBundleIdentifiers;
-(NSDate *)responseDate;
-(NSString *)debug;
-(void)setUuid:(NSString *)arg1 ;
-(void)addDebug:(id)arg1 ;
-(NSDate *)hideCompletionsAfterDate;
-(unsigned long long)mustPrefixMatchLength;
-(BOOL)resultsNeedFiltering;
-(void)markResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInputLength:(unsigned long long)arg3 results:(id)arg4 ;
-(void)logEngagement:(id)arg1 forInputLength:(unsigned long long)arg2 completion:(id)arg3 likelyUnsolicited:(BOOL)arg4 ;
-(void)logTransactionSuccessfulForInputLength:(unsigned long long)arg1 completion:(id)arg2 likelyUnsolicited:(BOOL)arg3 ;
-(void)discardAndLogCompleter:(id)arg1 likelyUnsolicited:(BOOL)arg2 ;
-(void)setLanguageTag:(NSString *)arg1 ;
-(id)initWithError:(id)arg1 requestType:(unsigned long long)arg2 ;
-(id)resultByQuery:(id)arg1 ;
-(void)setHideCompletionsTimeLimit:(double)arg1 ;
-(id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2 ;
-(id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)appendToDebug:(id)arg1 ;
-(BOOL)_pm_isSensitive;
-(NSArray *)level1Topics;
-(void)setLevel1Topics:(NSArray *)arg1 ;
-(NSArray *)level2Topics;
-(void)setLevel2Topics:(NSArray *)arg1 ;
-(void)setResultsNeedFiltering:(BOOL)arg1 ;
-(void)setMustPrefixMatchLength:(unsigned long long)arg1 ;
-(void)setHideCompletionsAfterDate:(NSDate *)arg1 ;
-(CKContextRequest *)debugRequest;
-(void)setDebugRequest:(CKContextRequest *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

