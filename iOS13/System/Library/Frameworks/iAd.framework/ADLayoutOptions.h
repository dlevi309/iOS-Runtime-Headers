/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
-(CGSize)reorientedContainerSize;
-(void)setReorientedContainerSize:(CGSize)arg1 ;
@end

