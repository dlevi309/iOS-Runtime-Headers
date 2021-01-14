/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)componentVersion;
-(NSString *)componentID;
-(NSString *)componentName;
@end

