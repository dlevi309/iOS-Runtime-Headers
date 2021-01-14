/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)lineSpacing;
-(unsigned long long)hash;
-(double)horizontalInset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLineSpacing:(CGPoint)arg1 horizontalInset:(double)arg2 ;
@end

