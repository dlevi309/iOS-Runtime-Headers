/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject {

	NSMutableDictionary* _activeConnectionMap;
	os_unfair_lock_s _writeLock;

}
+(id)sharedInstance;
-(id)init;
-(void)setActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(void)removeActiveConnection:(id)arg1 forKey:(id)arg2 ;
@end

