/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, HDPeriodicActivity;

@interface HDCloudSyncContext : NSObject <NSCopying> {

	NSUUID* _identifier;
	NSString* _shortIdentifier;
	long long _operationType;
	unsigned long long _options;
	long long _reason;
	HDPeriodicActivity* _periodicActivity;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortIdentifier;                    //@synthesize shortIdentifier=_shortIdentifier - In the implementation block
@property (nonatomic,readonly) long long operationType;                            //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) HDPeriodicActivity * periodicActivity;              //@synthesize periodicActivity=_periodicActivity - In the implementation block
-(long long)operationType;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(NSString *)shortIdentifier;
-(unsigned long long)options;
-(id)description;
-(long long)reason;
-(HDPeriodicActivity *)periodicActivity;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initForOperationType:(long long)arg1 options:(unsigned long long)arg2 reason:(long long)arg3 periodicActivity:(id)arg4 ;
-(id)subContextByAddingOptions:(unsigned long long)arg1 ;
-(id)subContextByRemovingOptions:(unsigned long long)arg1 ;
@end

