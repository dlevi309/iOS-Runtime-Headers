/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPSize : NSObject <NSCopying> {

	LPPointUnit* _width;
	LPPointUnit* _height;

}

@property (nonatomic,retain,readonly) LPPointUnit * width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) LPPointUnit * height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGSize asSize; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(LPPointUnit *)width;
-(LPPointUnit *)height;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)asSize;
-(id)initWithSquareSize:(double)arg1 ;
@end

