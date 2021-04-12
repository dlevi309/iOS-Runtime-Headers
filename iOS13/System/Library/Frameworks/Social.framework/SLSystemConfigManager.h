/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLSystemConfigManager : NSObject {

	void* _prefs;
	BOOL _notifyForExternalChangeOnly;
	int _applySkipCount;
	NSString* _serviceType;

}
+(id)sharedInstanceForCallbackWhileLocked:(void*)arg1 ;
+(id)sharedInstanceForServiceType:(id)arg1 ;
-(void)dealloc;
-(void)_keepAlive;
-(void)_tearDown;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)_notifyTarget:(unsigned)arg1 ;
-(void)_initializeSystemConfigPrefs:(id)arg1 ;
-(void)_synchronize;
-(void)_setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_SL0*)arg2 ;
-(void)_refresh;
-(void)setCachedUsername:(id)arg1 ;
-(id)cachedUsername;
@end

