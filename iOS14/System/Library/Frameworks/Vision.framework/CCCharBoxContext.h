/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface CCCharBoxContext : NSObject {

	unsigned short medianHeightTop;
	unsigned short medianHeightBottom;
	short loopBigBox;
	short loopBigBoxPrev;
	unsigned short filterWalkUpDownCount;
	unsigned allocationSize;
	float mTop;
	float mBottom;
	float bTop;
	float bBottom;
	float posUL;
	float posLL;
	float posUR;
	float posLR;
	float* floatVectorSumProd;
	char* pulseVectorHeightCharBox;
	char* pulseVectorHeightCharBoxAdaptive;
	unsigned long long* charBoxFlags;
	unsigned short* charboxROIFullVectorRowStart;
	unsigned short* charboxROIFullVectorHeight2;

}

@property (assign) float* floatVectorSumProd; 
@property (assign) char* pulseVectorHeightCharBox; 
@property (assign) char* pulseVectorHeightCharBoxAdaptive; 
@property (assign) unsigned long long* charBoxFlags; 
@property (assign) unsigned short* charboxROIFullVectorRowStart; 
@property (assign) unsigned short* charboxROIFullVectorHeight2; 
@property (assign) unsigned allocationSize; 
@property (assign) float mTop; 
@property (assign) float mBottom; 
@property (assign) float bTop; 
@property (assign) float bBottom; 
@property (assign) float posUL; 
@property (assign) float posLL; 
@property (assign) float posUR; 
@property (assign) float posLR; 
@property (assign) unsigned short medianHeightTop; 
@property (assign) unsigned short medianHeightBottom; 
@property (assign) short loopBigBox; 
@property (assign) short loopBigBoxPrev; 
@property (assign) unsigned short filterWalkUpDownCount; 
-(float)mTop;
-(float)bTop;
-(float)posUL;
-(float)posLL;
-(float)posUR;
-(float)posLR;
-(void)setMTop:(float)arg1 ;
-(float)mBottom;
-(unsigned short)medianHeightTop;
-(unsigned short)medianHeightBottom;
-(short)loopBigBox;
-(short)loopBigBoxPrev;
-(unsigned short)filterWalkUpDownCount;
-(float*)floatVectorSumProd;
-(char*)pulseVectorHeightCharBox;
-(void)setMBottom:(float)arg1 ;
-(unsigned)allocationSize;
-(char*)pulseVectorHeightCharBoxAdaptive;
-(unsigned long long*)charBoxFlags;
-(unsigned short*)charboxROIFullVectorRowStart;
-(unsigned short*)charboxROIFullVectorHeight2;
-(void)setFlag:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(void)clearFlag:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)checkFlag:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(void)copyFlagValue:(unsigned long long)arg1 toTarget:(unsigned long long)arg2 atIndex:(unsigned)arg3 ;
-(void)resetBoxBounds;
-(BOOL)makeAllocationsForWidth:(unsigned long long)arg1 ;
-(void)releaseAllocations;
-(void)setFloatVectorSumProd:(float*)arg1 ;
-(void)setPulseVectorHeightCharBox:(char*)arg1 ;
-(void)setPulseVectorHeightCharBoxAdaptive:(char*)arg1 ;
-(void)setBBottom:(float)arg1 ;
-(void)setCharBoxFlags:(unsigned long long*)arg1 ;
-(void)setCharboxROIFullVectorRowStart:(unsigned short*)arg1 ;
-(void)setCharboxROIFullVectorHeight2:(unsigned short*)arg1 ;
-(void)setPosUR:(float)arg1 ;
-(void)setPosLR:(float)arg1 ;
-(void)setMedianHeightTop:(unsigned short)arg1 ;
-(void)setMedianHeightBottom:(unsigned short)arg1 ;
-(void)setLoopBigBox:(short)arg1 ;
-(void)setLoopBigBoxPrev:(short)arg1 ;
-(void)setFilterWalkUpDownCount:(unsigned short)arg1 ;
-(float)bBottom;
-(void)setPosUL:(float)arg1 ;
-(void)setPosLL:(float)arg1 ;
-(void)setBTop:(float)arg1 ;
-(void)setAllocationSize:(unsigned)arg1 ;
-(void)dealloc;
@end

