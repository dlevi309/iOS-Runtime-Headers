/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerControllerOperation.h>

@class HAP2AccessoryServerAccessoryCache;

@interface HAP2AccessoryServerControllerAttributeRequestOperation : HAP2AccessoryServerControllerOperation {

	HAP2AccessoryServerAccessoryCache* _cache;

}
+(id)_parseCache:(id)arg1 ;
+(id)_characteristicsFromCachedCharacteristics:(id)arg1 ;
-(void)main;
-(void)_cleanUp;
-(void)_sendRequest;
@end

