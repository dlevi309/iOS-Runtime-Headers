/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKLinedPaper : NSObject <NSCopying> {

	double _horizontalInset;
	CGPoint _lineSpacing;

}

@property (nonatomic,readonly) CGPoint lineSpacing;                 //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,readonly) double horizontalInset;              //@synthesize horizontalInset=_horizontalInset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)lineSpacing;
-(double)horizontalInset;
-(id)initWithLineSpacing:(CGPoint)arg1 horizontalInset:(double)arg2 ;
@end

