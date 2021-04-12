/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugIn : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)infoDictionary;
-(id)version;
-(CFUUIDRef)uuid;
-(id)bundle;
-(id)displayName;
-(BOOL)isBlocked;
-(id)className;
-(id)group;
-(void)setIsBlocked:(BOOL)arg1 ;
-(Class)plugInClass;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)helpURL;
-(id)infoString;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
@end

