/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfiguration : NSObject {

	SCPreferencesRef _prefs;

}
+(id)sharedInstance;
-(void)dealloc;
-(unsigned char)synchronizeForWriting:(BOOL)arg1 ;
-(void)cleanupPrefs;
-(CFStringRef)dataServiceID;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)arg1 ;
-(id)interfaceConfigurationValueForKey:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setInterfaceConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfiguration:(CFStringRef)arg1 serviceID:(CFStringRef)arg2 ;
-(void)setProtocolConfiguration:(id)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(id)protocolConfigurationValueForKey:(CFStringRef)arg1 protocolType:(CFStringRef)arg2 serviceID:(CFStringRef)arg3 ;
-(void)setProtocolConfigurationValue:(id)arg1 forKey:(CFStringRef)arg2 protocolType:(CFStringRef)arg3 serviceID:(CFStringRef)arg4 ;
@end

