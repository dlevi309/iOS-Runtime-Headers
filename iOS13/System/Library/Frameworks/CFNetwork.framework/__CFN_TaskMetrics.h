/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSMutableArray, __CFN_TransactionMetrics, __CFN_SessionMetrics;

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {

	os_unfair_lock_s _lock;
	BOOL _ignoreNextRedirection;
	BOOL _completed;
	NSUUID* _UUID;
	unsigned long long _identifier;
	NSMutableArray* _transactionMetrics;
	double _createTime;
	double _firstResumeTime;
	double _completeTime;
	long long _options;
	long long _schedulingTier;
	__CFN_TransactionMetrics* _currentTransactionMetrics;
	__CFN_SessionMetrics* _sessionMetrics;

}

@property (nonatomic,retain) __CFN_SessionMetrics * sessionMetrics;                   //@synthesize sessionMetrics=_sessionMetrics - In the implementation block
@property (assign,nonatomic) BOOL completed;                                          //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                           //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionMetrics;                     //@synthesize transactionMetrics=_transactionMetrics - In the implementation block
@property (assign,nonatomic) double createTime;                                       //@synthesize createTime=_createTime - In the implementation block
@property (assign,nonatomic) double firstResumeTime;                                  //@synthesize firstResumeTime=_firstResumeTime - In the implementation block
@property (assign,nonatomic) double completeTime;                                     //@synthesize completeTime=_completeTime - In the implementation block
@property (assign,nonatomic) long long options;                                       //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long schedulingTier;                                //@synthesize schedulingTier=_schedulingTier - In the implementation block
@property (assign,nonatomic) BOOL ignoreNextRedirection;                              //@synthesize ignoreNextRedirection=_ignoreNextRedirection - In the implementation block
@property (retain) __CFN_TransactionMetrics * currentTransactionMetrics;              //@synthesize currentTransactionMetrics=_currentTransactionMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)optionsFromTask:(id)arg1 ;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(void)resume;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)suspend;
-(void)setOptions:(long long)arg1 ;
-(BOOL)completed;
-(void)completionHandlerEvent;
-(void)completeWithError:(id)arg1 ;
-(long long)schedulingTier;
-(void)setSchedulingTier:(long long)arg1 ;
-(__CFN_SessionMetrics *)sessionMetrics;
-(void)setSessionMetrics:(__CFN_SessionMetrics *)arg1 ;
-(void)lockTransactionMetrics:(/*^block*/id)arg1 ;
-(__CFN_TransactionMetrics *)currentTransactionMetrics;
-(void)delegateEvent:(SEL)arg1 ;
-(void)delegateBegin:(SEL)arg1 ;
-(void)delegateEnd:(SEL)arg1 ;
-(id)initWithTask:(id)arg1 sessionMetrics:(id)arg2 ;
-(void)nextTransaction:(unsigned long long)arg1 withNewRequest:(id)arg2 ;
-(void)setCurrentTransactionMetrics:(__CFN_TransactionMetrics *)arg1 ;
-(NSMutableArray *)transactionMetrics;
-(void)setTransactionMetrics:(NSMutableArray *)arg1 ;
-(double)createTime;
-(void)setCreateTime:(double)arg1 ;
-(double)firstResumeTime;
-(void)setFirstResumeTime:(double)arg1 ;
-(double)completeTime;
-(void)setCompleteTime:(double)arg1 ;
-(BOOL)ignoreNextRedirection;
-(void)setIgnoreNextRedirection:(BOOL)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
@end

