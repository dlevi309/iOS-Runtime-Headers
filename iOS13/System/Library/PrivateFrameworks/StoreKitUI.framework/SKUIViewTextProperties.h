/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIViewTextProperties : NSObject <NSCopying> {

	double _baselineOffsetFromBottom;
	double _desiredOffsetTop;
	double _firstBaselineOffset;

}

@property (assign,nonatomic) double baselineOffsetFromBottom;              //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
@property (assign,nonatomic) double desiredOffsetTop;                      //@synthesize desiredOffsetTop=_desiredOffsetTop - In the implementation block
@property (assign,nonatomic) double firstBaselineOffset;                   //@synthesize firstBaselineOffset=_firstBaselineOffset - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)firstBaselineOffset;
-(void)setFirstBaselineOffset:(double)arg1 ;
-(double)baselineOffsetFromBottom;
-(double)desiredOffsetTop;
-(id)initWithStringLayout:(id)arg1 ;
-(void)setBaselineOffsetFromBottom:(double)arg1 ;
-(id)initWithTextLayout:(id)arg1 isExpanded:(BOOL)arg2 ;
-(void)setDesiredOffsetTop:(double)arg1 ;
@end

