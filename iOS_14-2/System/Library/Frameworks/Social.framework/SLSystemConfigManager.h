/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)_keepAlive;
-(void*)_getValueForKey:(id)arg1 ;
-(void)_synchronize;
-(void)_refresh;
-(id)initWithServiceType:(id)arg1 ;
-(void)_tearDown;
-(void)dealloc;
-(void)_notifyTarget:(unsigned)arg1 ;
-(void)_initializeSystemConfigPrefs:(id)arg1 ;
-(void)_setCallback:(/*function pointer*/void*)arg1 withContext:(SCD_Struct_SL0*)arg2 ;
-(void)setCachedUsername:(id)arg1 ;
-(id)cachedUsername;
@end

