/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)retryInterval;
-(NSError *)underlyingError;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)requiresNetwork;
-(NSArray *)accountIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRetryInterval:(long long)arg1 accountIdentifiers:(id)arg2 ;
@end

