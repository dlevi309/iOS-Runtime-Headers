/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, TDreamFramebuffer;

@interface TDreamFramebufferManager : NSObject {

	id memoryWarningObserver;
	NSMutableArray* framebufferArrayLarge;
	NSMutableArray* framebufferArraySmall;
	NSString* actualLookUp;
	NSString* actualPalette;
	CGSize smallUseSize;
	CGSize largeUseSize;
	TDreamFramebuffer* _outputBufferAndTexture;
	TDreamFramebuffer* _lookUpBuffer;

}

@property (nonatomic,retain) TDreamFramebuffer * outputBufferAndTexture;              //@synthesize outputBufferAndTexture=_outputBufferAndTexture - In the implementation block
@property (nonatomic,retain) TDreamFramebuffer * lookUpBuffer;                        //@synthesize lookUpBuffer=_lookUpBuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)lookupFailedToLoad;
-(void)deleteLargeFramebuffers;
-(void)deleteSmallFramebuffers;
-(void)deleteAllFramebuffers;
-(void)newLookUp:(id)arg1 ;
-(unsigned)getOutputBufferNameWithIPImage:(IPImage)arg1 ;
-(void)addImageBufferToArray:(int)arg1 ipImage:(IPImage)arg2 ;
-(unsigned)getTextureNameFromArray:(int)arg1 ;
-(unsigned)getBufferFromArray:(int)arg1 withSize:(CGSize)arg2 ;
-(void)clearFrameBuffers;
-(unsigned)getOutputBufferNamer;
-(TDreamFramebuffer *)outputBufferAndTexture;
-(void)setOutputBufferAndTexture:(TDreamFramebuffer *)arg1 ;
-(TDreamFramebuffer *)lookUpBuffer;
-(void)setLookUpBuffer:(TDreamFramebuffer *)arg1 ;
@end

