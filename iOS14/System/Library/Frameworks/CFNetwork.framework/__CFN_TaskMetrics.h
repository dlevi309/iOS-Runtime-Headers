/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class __CFN_SessionMetrics, NSUUID, NSMutableArray, __CFN_TransactionMetrics;

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {

	os_unfair_lock_s _lock;
	BOOL _completed;
	BOOL _ignoreNextRedirection;
	__CFN_SessionMetrics* _sessionMetrics;
	NSUUID* _UUID;
	unsigned long long _identifier;
	NSMutableArray* _transactionMetrics;
	double _createTime;
	double _firstResumeTime;
	double _completeTime;
	long long _options;
	long long _schedulingTier;
	__CFN_TransactionMetrics* _currentTransactionMetrics;

}

@property (nonatomic,retain) NSMutableArray * _daemon_transactionMetrics; 
@property (retain) __CFN_TransactionMetrics * _daemon_currentTransactionMetrics; 
+(BOOL)supportsSecureCoding;
-(void)set_daemon_currentTransactionMetrics:(__CFN_TransactionMetrics *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableArray *)_daemon_transactionMetrics;
-(__CFN_TransactionMetrics *)_daemon_currentTransactionMetrics;
-(void)set_daemon_transactionMetrics:(NSMutableArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

