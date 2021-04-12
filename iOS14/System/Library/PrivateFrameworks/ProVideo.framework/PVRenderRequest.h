/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSArray;

@interface PVRenderRequest : NSObject {

	BOOL _highQuality;
	int _priority;
	int _gcdPriority;
	int _gpuPriority;
	unsigned _outputCVPixelBufferFormat;
	unsigned _parentCode;
	unsigned _childCode;
	NSArray* _outputNodes;
	id _userContext;
	CGSize _outputSize;
	SCD_Struct_PV22 _time;

}

@property (nonatomic,readonly) NSArray * outputNodes;                         //@synthesize outputNodes=_outputNodes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV22 time;                          //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                             //@synthesize outputSize=_outputSize - In the implementation block
@property (assign,nonatomic) int priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) int gcdPriority;                                 //@synthesize gcdPriority=_gcdPriority - In the implementation block
@property (assign,nonatomic) int gpuPriority;                                 //@synthesize gpuPriority=_gpuPriority - In the implementation block
@property (assign,nonatomic) BOOL highQuality;                                //@synthesize highQuality=_highQuality - In the implementation block
@property (nonatomic,retain) id userContext;                                  //@synthesize userContext=_userContext - In the implementation block
@property (assign,nonatomic) unsigned outputCVPixelBufferFormat;              //@synthesize outputCVPixelBufferFormat=_outputCVPixelBufferFormat - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                             //@synthesize parentCode=_parentCode - In the implementation block
@property (assign,nonatomic) unsigned childCode;                              //@synthesize childCode=_childCode - In the implementation block
-(id)userContext;
-(SCD_Struct_PV22)time;
-(void)setUserContext:(id)arg1 ;
-(BOOL)highQuality;
-(int)priority;
-(void)setHighQuality:(BOOL)arg1 ;
-(void)setPriority:(int)arg1 ;
-(CGSize)outputSize;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(void)setChildCode:(unsigned)arg1 ;
-(NSArray *)outputNodes;
-(id)initWithOutputs:(id)arg1 atTime:(SCD_Struct_PV22)arg2 outputSize:(CGSize)arg3 ;
-(unsigned)childCode;
-(int)gcdPriority;
-(void)setGcdPriority:(int)arg1 ;
-(int)gpuPriority;
-(void)setGpuPriority:(int)arg1 ;
-(unsigned)outputCVPixelBufferFormat;
-(void)setOutputCVPixelBufferFormat:(unsigned)arg1 ;
@end

