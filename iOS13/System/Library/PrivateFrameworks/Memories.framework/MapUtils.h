/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface MapUtils : NSObject
+(id)locationWithImageURL:(id)arg1 ;
+(float)bestEndingLongitude:(float)arg1 forShortestTripFromLongitude:(float)arg2 ;
+(CGPoint)pixelFromLatitude:(float)arg1 longitude:(float)arg2 onEquirectangularMapWithSize:(CGSize)arg3 geographicBounds:(CGRect)arg4 ;
+(CGRect)geographicRectFromPixelRect:(CGRect)arg1 onEquirectangularMapWithSize:(CGSize)arg2 geographicBounds:(CGRect)arg3 ;
@end

