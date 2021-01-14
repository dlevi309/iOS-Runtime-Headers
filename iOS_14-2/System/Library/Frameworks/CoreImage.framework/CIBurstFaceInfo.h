/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstFaceInfo : NSObject {

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
-(CGSize)hwSize;
-(CGSize)swSize;
-(CGPoint)hwCenter;
-(CGPoint)swCenter;
-(int)hwFaceId;
-(int)swFaceId;
-(void)setSwFaceId:(int)arg1 ;
-(void)setSwSize:(CGSize)arg1 ;
-(void)setSwCenter:(CGPoint)arg1 ;
-(void)setSwLastFrameSeen:(int)arg1 ;
-(void)setHwFaceId:(int)arg1 ;
-(void)setHwCenter:(CGPoint)arg1 ;
-(void)setHwSize:(CGSize)arg1 ;
-(void)setHwLastFrameSeen:(int)arg1 ;
-(CGRect)hwFaceRect;
-(CGRect)swFaceRect;
-(float)overlapWithHwRect:(CGRect)arg1 ;
-(float)overlapWithSwRect:(CGRect)arg1 ;
-(int)swLastFrameSeen;
-(int)hwLastFrameSeen;
@end

