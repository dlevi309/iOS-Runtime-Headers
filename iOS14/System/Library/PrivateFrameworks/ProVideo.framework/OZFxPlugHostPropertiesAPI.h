/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

