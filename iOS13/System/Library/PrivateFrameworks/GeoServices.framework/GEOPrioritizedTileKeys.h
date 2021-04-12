/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPrioritizedTileKeys : NSObject {

	void* _keysAndPriorities;

}

@property (nonatomic,readonly) unsigned highestPriority; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeKey:(const GEOTileKey*)arg1 ;
-(void)setPriority:(unsigned)arg1 forKey:(const GEOTileKey*)arg2 ;
-(unsigned)highestPriority;
-(BOOL)popHighestPriorityKey:(GEOTileKey*)arg1 priority:(unsigned*)arg2 ;
-(id)initWithKeys:(id)arg1 priorities:(id)arg2 ;
@end

