/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol _CDUserContext;
@class NSMutableDictionary;

@interface REDuetContextStore : RESingleton {

	id<_CDUserContext> _context;
	NSMutableDictionary* _registrations;

}
-(id)_init;
-(id)isConnectedToCarQuery;
-(id)isConnectedToAudioBluetoothDeviceQuery;
-(void)registerForQuery:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)unregisterForQuery:(id)arg1 ;
@end

