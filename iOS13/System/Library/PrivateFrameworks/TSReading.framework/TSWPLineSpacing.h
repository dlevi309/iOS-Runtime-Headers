/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPLineSpacing : NSObject <NSCopying> {

	int _mode;
	double _amount;
	double _baselineRule;

}
+(id)lineSpacing;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)mode;
-(double)amount;
-(id)initWithMode:(int)arg1 amount:(double)arg2 ;
-(id)initWithMode:(int)arg1 amount:(double)arg2 baselineRule:(double)arg3 ;
-(double)baselineRule;
@end

