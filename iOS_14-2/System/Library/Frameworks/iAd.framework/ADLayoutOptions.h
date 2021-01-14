/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADLayoutOptions : NSObject <NSCopying> {

	CGSize _containerSize;
	CGSize _reorientedContainerSize;

}

@property (assign,nonatomic) CGSize containerSize;                        //@synthesize containerSize=_containerSize - In the implementation block
@property (assign,nonatomic) CGSize reorientedContainerSize;              //@synthesize reorientedContainerSize=_reorientedContainerSize - In the implementation block
-(id)_initWithContainerSize:(CGSize)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
-(CGSize)reorientedContainerSize;
-(CGSize)containerSize;
-(void)setReorientedContainerSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

