/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@class NSDictionary;

@interface PRRangingDevice : NSObject {

	NSDictionary* _clientInfo;

}

@property (copy,readonly) NSDictionary * clientInfo; 
+(BOOL)isSupported;
-(id)init;
-(NSDictionary *)clientInfo;
@end

