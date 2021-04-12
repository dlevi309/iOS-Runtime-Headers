/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface MapUtils : NSObject
+(id)locationWithImageURL:(id)arg1 ;
+(float)bestEndingLongitude:(float)arg1 forShortestTripFromLongitude:(float)arg2 ;
+(CGPoint)pixelFromLatitude:(float)arg1 longitude:(float)arg2 onEquirectangularMapWithSize:(CGSize)arg3 geographicBounds:(CGRect)arg4 ;
+(CGRect)geographicRectFromPixelRect:(CGRect)arg1 onEquirectangularMapWithSize:(CGSize)arg2 geographicBounds:(CGRect)arg3 ;
@end

