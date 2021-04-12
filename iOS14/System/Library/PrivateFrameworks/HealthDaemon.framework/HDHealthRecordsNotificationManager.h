/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDConceptIndexManagerObserver.h>

@class HDProfile, NSString;

@interface HDHealthRecordsNotificationManager : NSObject <HDConceptIndexManagerObserver> {

	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyForNewHealthRecordsForProfile:(id)arg1 ;
+(void)badgeForNewHealthRecordsForProfile:(id)arg1 ;
+(void)_notifyUserIfNecessaryForProfile:(id)arg1 ;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2 ;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)stopWithError:(id*)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(HDProfile *)profile;
-(void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1 ;
@end

