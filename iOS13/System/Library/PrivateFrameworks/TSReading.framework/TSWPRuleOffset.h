/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPRuleOffset : NSObject <NSCopying> {

	double _dX;
	double _dY;

}

@property (nonatomic,readonly) double dX;              //@synthesize dX=_dX - In the implementation block
@property (nonatomic,readonly) double dY;              //@synthesize dY=_dY - In the implementation block
+(id)ruleOffset;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)pointValue;
-(CGSize)sizeValue;
-(id)initWithDX:(double)arg1 dY:(double)arg2 ;
-(double)dX;
-(double)dY;
@end

