/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError, NSArray, NSDate;

@interface CKContextResponse : NSObject <NSSecureCoding> {

	BOOL _discarded;
	double _hideCompletionsTimeLimit;
	AB _shown;
	AB _engaged;
	AB _transactionSuccessful;
	AB _logged;
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
	NSString* _debug;
	unsigned long long _requestType;
	unsigned long long _mustPrefixMatchLength;
	NSDate* _hideCompletionsAfterDate;
	NSDate* _responseDate;

}

@property (assign,nonatomic) BOOL resultsNeedFiltering;                             //@synthesize resultsNeedFiltering=_resultsNeedFiltering - In the implementation block
@property (assign,nonatomic) unsigned long long mustPrefixMatchLength;              //@synthesize mustPrefixMatchLength=_mustPrefixMatchLength - In the implementation block
@property (nonatomic,retain) NSDate * hideCompletionsAfterDate;                     //@synthesize hideCompletionsAfterDate=_hideCompletionsAfterDate - In the implementation block
@property (nonatomic,retain) NSDate * responseDate;                                 //@synthesize responseDate=_responseDate - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * results;                                     //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSArray * level1Topics;                                //@synthesize level1Topics=_level1Topics - In the implementation block
@property (nonatomic,retain) NSArray * level2Topics;                                //@synthesize level2Topics=_level2Topics - In the implementation block
@property (nonatomic,retain) NSString * debug;                                      //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                        //@synthesize requestType=_requestType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)safari_topQIDsWithMaximumCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSArray *)results;
-(void)setError:(NSError *)arg1 ;
-(NSString *)uuid;
-(BOOL)isPlaceholder;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)debug;
-(void)setDebug:(NSString *)arg1 ;
-(unsigned long long)requestType;
-(void)setResults:(NSArray *)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setResponseDate:(NSDate *)arg1 ;
-(NSDate *)responseDate;
-(id)completer;
-(void)discard;
-(NSDate *)hideCompletionsAfterDate;
-(unsigned long long)mustPrefixMatchLength;
-(BOOL)resultsNeedFiltering;
-(void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3 couldHaveShown:(unsigned long long)arg4 ;
-(void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3 ;
-(void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2 ;
-(void)discardCompleter:(id)arg1 ;
-(id)initWithError:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)setHideCompletionsTimeLimit:(double)arg1 ;
-(id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2 ;
-(id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)appendToDebug:(id)arg1 ;
-(void)addDebug:(id)arg1 ;
-(id)resultByQuery:(id)arg1 ;
-(NSArray *)level1Topics;
-(void)setLevel1Topics:(NSArray *)arg1 ;
-(NSArray *)level2Topics;
-(void)setLevel2Topics:(NSArray *)arg1 ;
-(void)setResultsNeedFiltering:(BOOL)arg1 ;
-(void)setMustPrefixMatchLength:(unsigned long long)arg1 ;
-(void)setHideCompletionsAfterDate:(NSDate *)arg1 ;
@end

