/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString, NSNumber, NSError;

@interface CKDPCSKeySyncCoreAnalytics : NSObject {

	NSString* _serviceName;
	NSNumber* _shouldThrottle;
	NSNumber* _isManatee;
	NSString* _keySyncResult;
	NSString* _overallResult;
	NSNumber* _keySyncDurationSec;
	NSNumber* _throttledDurationSec;
	NSString* _context;
	NSString* _bundleID;
	NSError* _error;

}

@property (nonatomic,retain) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * shouldThrottle;                    //@synthesize shouldThrottle=_shouldThrottle - In the implementation block
@property (nonatomic,retain) NSNumber * isManatee;                         //@synthesize isManatee=_isManatee - In the implementation block
@property (nonatomic,retain) NSString * keySyncResult;                     //@synthesize keySyncResult=_keySyncResult - In the implementation block
@property (nonatomic,retain) NSString * overallResult;                     //@synthesize overallResult=_overallResult - In the implementation block
@property (nonatomic,retain) NSNumber * keySyncDurationSec;                //@synthesize keySyncDurationSec=_keySyncDurationSec - In the implementation block
@property (nonatomic,retain) NSNumber * throttledDurationSec;              //@synthesize throttledDurationSec=_throttledDurationSec - In the implementation block
@property (nonatomic,retain) NSString * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
-(void)setIsManatee:(NSNumber *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)shouldThrottle;
-(NSString *)context;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSNumber *)isManatee;
-(NSString *)bundleID;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(void)setShouldThrottle:(NSNumber *)arg1 ;
-(void)setOverallResult:(NSString *)arg1 ;
-(NSString *)keySyncResult;
-(NSString *)overallResult;
-(NSNumber *)keySyncDurationSec;
-(NSNumber *)throttledDurationSec;
-(void)setKeySyncResult:(NSString *)arg1 ;
-(void)setKeySyncDurationSec:(NSNumber *)arg1 ;
-(void)setThrottledDurationSec:(NSNumber *)arg1 ;
@end

