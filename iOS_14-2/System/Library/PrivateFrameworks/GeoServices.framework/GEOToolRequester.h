/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOToolProxy.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
+(id)sharedRequester;
-(id)ping;
-(id)getDefault:(id)arg1 source:(long long*)arg2 ;
-(unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1 ;
-(unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2 ;
-(BOOL)notifyNetworkDefaultsChanged;
-(void)lockDBs;
-(void)invalidateTileCache;
-(void)unlockDBs;
@end

