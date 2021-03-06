/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@interface BurstFaceInfo : NSObject {

	int swFaceId;
	int swLastFrameSeen;
	int hwFaceId;
	int hwLastFrameSeen;
	CGPoint swCenter;
	CGSize swSize;
	CGPoint hwCenter;
	CGSize hwSize;

}

@property (assign) int swFaceId; 
@property (assign) CGPoint swCenter; 
@property (assign) CGSize swSize; 
@property (assign) int swLastFrameSeen; 
@property (assign) int hwFaceId; 
@property (assign) CGPoint hwCenter; 
@property (assign) CGSize hwSize; 
@property (assign) int hwLastFrameSeen; 
-(id)init;
-(void)setSwFaceId:(int)arg1 ;
-(void)setSwCenter:(CGPoint)arg1 ;
-(void)setSwSize:(CGSize)arg1 ;
-(void)setSwLastFrameSeen:(int)arg1 ;
-(void)setHwFaceId:(int)arg1 ;
-(void)setHwCenter:(CGPoint)arg1 ;
-(void)setHwSize:(CGSize)arg1 ;
-(void)setHwLastFrameSeen:(int)arg1 ;
-(CGPoint)hwCenter;
-(CGSize)hwSize;
-(CGPoint)swCenter;
-(CGSize)swSize;
-(int)hwFaceId;
-(CGRect)hwFaceRect;
-(int)swFaceId;
-(CGRect)swFaceRect;
-(float)overlapWithHwRect:(CGRect)arg1 ;
-(float)overlapWithSwRect:(CGRect)arg1 ;
-(int)swLastFrameSeen;
-(int)hwLastFrameSeen;
@end

