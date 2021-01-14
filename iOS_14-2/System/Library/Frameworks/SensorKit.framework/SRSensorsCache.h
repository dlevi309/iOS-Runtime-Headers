/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSCache, NSArray, NSString;

@interface SRSensorsCache : NSObject <NSCacheDelegate> {

	NSCache* _sensorsCache;
	NSArray* _sensorDescriptionsDirs;
	BOOL _shouldReloadAllSensors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)dealloc;
-(id)initWithDirectories:(id)arg1 ;
@end

