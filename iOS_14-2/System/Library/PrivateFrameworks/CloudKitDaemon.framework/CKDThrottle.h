/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKThrottle.h>

@interface CKDThrottle : CKThrottle
+(void)initialize;
+(void)throttleWillBeRemoved:(id)arg1 ;
+(void)invalidateAdopterThrottles;
+(BOOL)addThrottle:(id)arg1 ;
-(id)initWithDefaultsKey:(id)arg1 ;
-(void)throttleDataWasChanged;
-(void)saveToDefaults;
-(void)removeDefaultsData;
@end

