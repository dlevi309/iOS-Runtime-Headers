/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString, NSDictionary;

@interface HMDHomeSaveRequest : HMFObject {

	BOOL _objectChange;
	BOOL _incrementGeneration;
	HMDHome* _home;
	NSString* _reason;
	NSDictionary* _information;
	unsigned long long _saveOptions;

}

@property (nonatomic,readonly) HMDHome * home;                              //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSString * reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * information;                  //@synthesize information=_information - In the implementation block
@property (nonatomic,readonly) unsigned long long saveOptions;              //@synthesize saveOptions=_saveOptions - In the implementation block
@property (nonatomic,readonly) BOOL objectChange;                           //@synthesize objectChange=_objectChange - In the implementation block
@property (nonatomic,readonly) BOOL incrementGeneration;                    //@synthesize incrementGeneration=_incrementGeneration - In the implementation block
-(NSString *)reason;
-(NSDictionary *)information;
-(HMDHome *)home;
-(id)initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(BOOL)arg4 objectChange:(BOOL)arg5 ;
-(BOOL)objectChange;
-(id)initWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3 ;
-(id)initWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3 ;
-(id)_initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(BOOL)arg4 objectChange:(BOOL)arg5 saveOptions:(unsigned long long)arg6 ;
-(void)_updateSaveOptions:(BOOL)arg1 reason:(id)arg2 ;
-(unsigned long long)saveOptions;
-(BOOL)incrementGeneration;
@end

