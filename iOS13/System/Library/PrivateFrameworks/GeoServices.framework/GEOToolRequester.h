/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOToolProxy.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
+(id)sharedRequester;
-(id)ping;
-(void)unlockDBs;
-(void)lockDBs;
-(id)getDefault:(id)arg1 source:(long long*)arg2 ;
-(unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1 ;
-(unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2 ;
-(void)invalidateTileCache;
-(BOOL)notifyNetworkDefaultsChanged;
@end

