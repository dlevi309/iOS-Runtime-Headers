/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPrioritizedTileKeys : NSObject {

	void* _keysAndPriorities;

}

@property (nonatomic,readonly) unsigned highestPriority; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(BOOL)popHighestPriorityKey:(GEOTileKey*)arg1 priority:(unsigned*)arg2 ;
-(unsigned long long)count;
-(id)initWithKeys:(id)arg1 priorities:(id)arg2 ;
-(void)removeKey:(const GEOTileKey*)arg1 ;
-(void)setPriority:(unsigned)arg1 forKey:(const GEOTileKey*)arg2 ;
-(unsigned)highestPriority;
-(void)dealloc;
@end

