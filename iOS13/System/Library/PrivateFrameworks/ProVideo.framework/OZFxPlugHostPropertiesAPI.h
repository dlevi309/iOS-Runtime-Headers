/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/FxHostPropertiesAPI.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@class NSString;

@interface OZFxPlugHostPropertiesAPI : NSObject <FxHostPropertiesAPI, PROAPIObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHostPropertiesAPI;
+(void)releaseSharedHostPropertiesAPI;
-(id)hostProperties;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

