/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, BWFormatRequirements, NSArray;

@interface BWNodeOutputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	NSArray* _indexesOfInputsWhichDrivesThisOutput;
	NSString* _attachedMediaKeyOfInputWhichDrivesThisOutput;
	int _passthroughMode;
	int _indexOfInputWhichDrivesThisOutput;
	int _owningNodeRetainedBufferCount;
	BOOL _providesPixelBufferPool;
	BOOL _providesDataBufferPool;
	BOOL _pixelBufferPoolProvidesBackPressure;
	BOOL _performsAttachedMediaRemapping;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;                          //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) BOOL providesPixelBufferPool;                                       //@synthesize providesPixelBufferPool=_providesPixelBufferPool - In the implementation block
@property (assign,nonatomic) BOOL providesDataBufferPool;                                        //@synthesize providesDataBufferPool=_providesDataBufferPool - In the implementation block
@property (assign,nonatomic) BOOL pixelBufferPoolProvidesBackPressure;                           //@synthesize pixelBufferPoolProvidesBackPressure=_pixelBufferPoolProvidesBackPressure - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                                //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) int indexOfInputWhichDrivesThisOutput; 
@property (nonatomic,copy) NSArray * indexesOfInputsWhichDrivesThisOutput; 
@property (nonatomic,readonly) BOOL performsAttachedMediaRemapping; 
@property (nonatomic,copy) NSString * attachedMediaKeyOfInputWhichDrivesThisOutput; 
@property (assign,nonatomic) int owningNodeRetainedBufferCount;                                  //@synthesize owningNodeRetainedBufferCount=_owningNodeRetainedBufferCount - In the implementation block
-(void)setIndexOfInputWhichDrivesThisOutput:(int)arg1 ;
-(int)indexOfInputWhichDrivesThisOutput;
-(BOOL)providesDataBufferPool;
-(BOOL)providesPixelBufferPool;
-(void)setPixelBufferPoolProvidesBackPressure:(BOOL)arg1 ;
-(BOOL)pixelBufferPoolProvidesBackPressure;
-(BOOL)performsAttachedMediaRemapping;
-(void)setProvidesPixelBufferPool:(BOOL)arg1 ;
-(NSArray *)indexesOfInputsWhichDrivesThisOutput;
-(id)init;
-(int)owningNodeRetainedBufferCount;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BOOL)isDrivenByInputWithIndex:(unsigned long long)arg1 ;
-(int)passthroughMode;
-(void)setPassthroughMode:(int)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(NSString *)attachedMediaKeyOfInputWhichDrivesThisOutput;
-(void)setIndexesOfInputsWhichDrivesThisOutput:(NSArray *)arg1 ;
-(void)setOwningNodeRetainedBufferCount:(int)arg1 ;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(void)setProvidesDataBufferPool:(BOOL)arg1 ;
-(void)setAttachedMediaKeyOfInputWhichDrivesThisOutput:(NSString *)arg1 ;
-(void)dealloc;
@end

