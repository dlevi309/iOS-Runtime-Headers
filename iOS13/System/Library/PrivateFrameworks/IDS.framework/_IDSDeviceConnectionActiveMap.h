/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

