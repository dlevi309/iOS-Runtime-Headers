/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXMPixelBufferWrapper : NSObject {

	CVBufferRef _pixelBuffer;
	unsigned _orientation;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) CGSize unorientedSize; 
@property (nonatomic,readonly) CGSize orientedSize; 
+(id)new;
+(id)wrapperWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned)orientation;
-(CVBufferRef)pixelBuffer;
-(CGSize)orientedSize;
-(id)_initWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(CGSize)unorientedSize;
@end

