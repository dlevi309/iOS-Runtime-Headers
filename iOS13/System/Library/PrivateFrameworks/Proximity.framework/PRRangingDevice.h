/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

