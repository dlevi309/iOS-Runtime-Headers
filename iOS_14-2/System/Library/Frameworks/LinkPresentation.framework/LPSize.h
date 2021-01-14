/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(LPPointUnit *)width;
-(CGSize)asSize;
-(id)init;
-(id)initWithSize:(CGSize)arg1 ;
-(LPPointUnit *)height;
-(id)initWithSquareSize:(double)arg1 ;
-(id)initWithSquarePoints:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

