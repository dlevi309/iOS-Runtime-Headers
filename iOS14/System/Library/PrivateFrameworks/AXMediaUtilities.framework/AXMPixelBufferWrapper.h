/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)orientedSize;
-(CVBufferRef)pixelBuffer;
-(unsigned)orientation;
-(id)_initWithPixelBuffer:(CVBufferRef)arg1 orientation:(unsigned)arg2 ;
-(CGSize)unorientedSize;
-(void)dealloc;
@end

