/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class PKQuadTree;

@interface PKPhysicsGrid : NSObject {

	shared_ptr<PKCGrid>* grid;
	PKQuadTree* quadTree;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (assign,nonatomic) shared_ptr<PKCGrid>* gridPtr; 
+(id)gridFromOccupancyArray:(const char*)arg1 bytePitch:(int)arg2 width:(int)arg3 height:(int)arg4 ;
+(id)gridFromRGBAU8PixelData:(const char*)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 alphaThreshold:(float)arg4 accuracy:(float)arg5 ;
+(id)vectorGridFromRGBAU8PixelData:(const char*)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 accuracy:(float)arg4 ;
-(int)width;
-(int)height;
-(shared_ptr<PKPath>*)pathFromOutlineWithSmoothingThreshold:(double)arg1 bounds:(SCD_Struct_PK27)arg2 ;
-(unsigned char)gridDataAtX:(int)arg1 y:(int)arg2 z:(int)arg3 ;
-(BOOL)isGridRegionOccupied:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4 ;
-(id)physicsBodyFromLVS0:(CGRect)arg1 ;
-(id)physicsBodyFromSmoothedOutline:(double)arg1 size:(CGSize)arg2 ;
-(shared_ptr<PKCGrid>*)gridPtr;
-(void)setGridPtr:(shared_ptr<PKCGrid>*)arg1 ;
@end

