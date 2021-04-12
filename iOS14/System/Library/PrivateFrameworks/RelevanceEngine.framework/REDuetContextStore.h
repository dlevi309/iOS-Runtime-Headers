/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

