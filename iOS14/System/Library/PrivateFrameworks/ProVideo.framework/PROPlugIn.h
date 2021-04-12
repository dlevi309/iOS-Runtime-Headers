/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugIn : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)bundle;
-(BOOL)isBlocked;
-(id)infoDictionary;
-(id)group;
-(CFUUIDRef)uuid;
-(id)delegate;
-(id)className;
-(void)setIsBlocked:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)version;
-(id)displayName;
-(id)helpURL;
-(Class)plugInClass;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
-(id)infoString;
@end

