/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/


#import <AutoLoop/AutoLoop-Structs.h>
@interface StabilizeParams : NSObject {

	vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo> >* mFrameInfo;
	vector<CMTime, std::__1::allocator<CMTime> >* mFrameTimeArray;
	BOOL passThrough;
	BOOL sparseFrames;
	unsigned numFrames;
	unsigned version;
	SCD_Struct_Au1 roiStart;
	SCD_Struct_Au1 roiLength;
	CGRect cropRect;

}

@property (readonly) unsigned numFrames; 
@property (assign) CGRect cropRect; 
@property (assign) SCD_Struct_Au1 roiStart; 
@property (assign) SCD_Struct_Au1 roiLength; 
@property (assign) BOOL passThrough; 
@property (assign) BOOL sparseFrames; 
@property (readonly) unsigned version; 
+(id)stabilizeParamsFromNSDictionary:(id)arg1 ;
+(id)stabilizeParams;
+(id)stabilizeParamsFromURL:(id)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)init;
-(BOOL)writeToURL:(id)arg1 ;
-(void)append:(SCD_Struct_St16*)arg1 ;
-(unsigned)version;
-(unsigned)numFrames;
-(vector<CMTime, std::__1::allocator<CMTime> >*)frameTimes;
-(SCD_Struct_Au1)roiLength;
-(id)infoAsDict;
-(void)setPassThrough:(BOOL)arg1 ;
-(void)setRoiStart:(SCD_Struct_Au1)arg1 ;
-(void)setRoiLength:(SCD_Struct_Au1)arg1 ;
-(id)initFromDict:(id)arg1 ;
-(SCD_Struct_Au1)timeForFrame:(unsigned)arg1 ;
-(void)getFrameInfo:(unsigned)arg1 frameInfo:(SCD_Struct_St16*)arg2 ;
-(SCD_Struct_Au1)roiStart;
-(BOOL)passThrough;
-(BOOL)sparseFrames;
-(void)setSparseFrames:(BOOL)arg1 ;
@end

