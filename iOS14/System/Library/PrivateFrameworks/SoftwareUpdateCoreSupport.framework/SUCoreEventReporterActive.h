/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface SUCoreEventReporterActive : NSObject <NSSecureCoding> {

	NSURL* _serverURL;
	long long _attemptedSendCount;
	long long _failedSendCount;
	long long _discoveredRunningCount;
	long long _discoveredSuspendedCount;
	long long _discoveredCancelingCount;

}

@property (nonatomic,retain) NSURL * serverURL;                               //@synthesize serverURL=_serverURL - In the implementation block
@property (assign,nonatomic) long long attemptedSendCount;                    //@synthesize attemptedSendCount=_attemptedSendCount - In the implementation block
@property (assign,nonatomic) long long failedSendCount;                       //@synthesize failedSendCount=_failedSendCount - In the implementation block
@property (assign,nonatomic) long long discoveredRunningCount;                //@synthesize discoveredRunningCount=_discoveredRunningCount - In the implementation block
@property (assign,nonatomic) long long discoveredSuspendedCount;              //@synthesize discoveredSuspendedCount=_discoveredSuspendedCount - In the implementation block
@property (assign,nonatomic) long long discoveredCancelingCount;              //@synthesize discoveredCancelingCount=_discoveredCancelingCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)serverURL;
-(id)description;
-(id)summary;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithServerURL:(id)arg1 ;
-(long long)attemptedSendCount;
-(long long)failedSendCount;
-(long long)discoveredRunningCount;
-(long long)discoveredSuspendedCount;
-(long long)discoveredCancelingCount;
-(id)toArchivedData;
-(id)initFromArchivedData:(id)arg1 ;
-(void)setAttemptedSendCount:(long long)arg1 ;
-(void)setFailedSendCount:(long long)arg1 ;
-(void)setDiscoveredRunningCount:(long long)arg1 ;
-(void)setDiscoveredSuspendedCount:(long long)arg1 ;
-(void)setDiscoveredCancelingCount:(long long)arg1 ;
@end

