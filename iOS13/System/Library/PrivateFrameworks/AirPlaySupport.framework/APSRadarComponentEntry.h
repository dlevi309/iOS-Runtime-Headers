/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
*/


@class NSString;

@interface APSRadarComponentEntry : NSObject {

	NSString* componentName;
	NSString* componentVersion;
	NSString* componentID;

}

@property (nonatomic,readonly) NSString * componentName; 
@property (nonatomic,readonly) NSString * componentVersion; 
@property (nonatomic,readonly) NSString * componentID; 
+(id)componentEntryWithName:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3 ;
-(NSString *)componentName;
-(NSString *)componentVersion;
-(NSString *)componentID;
@end

