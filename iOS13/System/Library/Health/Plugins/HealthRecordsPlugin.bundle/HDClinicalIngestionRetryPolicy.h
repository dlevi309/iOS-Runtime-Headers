/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSError;

@interface HDClinicalIngestionRetryPolicy : NSObject <NSCopying, NSMutableCopying> {

	BOOL _requiresNetwork;
	NSArray* _accountIdentifiers;
	NSError* _underlyingError;
	long long _retryInterval;

}

@property (nonatomic,copy,readonly) NSArray * accountIdentifiers;              //@synthesize accountIdentifiers=_accountIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSError * underlyingError;                 //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,readonly) long long retryInterval;                        //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,readonly) BOOL requiresNetwork;                           //@synthesize requiresNetwork=_requiresNetwork - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSError *)underlyingError;
-(BOOL)requiresNetwork;
-(NSArray *)accountIdentifiers;
-(long long)retryInterval;
-(id)initWithRetryInterval:(long long)arg1 accountIdentifiers:(id)arg2 ;
@end

