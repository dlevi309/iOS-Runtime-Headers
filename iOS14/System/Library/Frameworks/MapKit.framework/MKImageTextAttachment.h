/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@interface MKImageTextAttachment : NSTextAttachment {

	double _verticalOffset;

}

@property (assign,nonatomic) double verticalOffset;              //@synthesize verticalOffset=_verticalOffset - In the implementation block
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setVerticalOffset:(double)arg1 ;
-(id)initWithImage:(id)arg1 verticalOffset:(double)arg2 ;
-(double)verticalOffset;
@end

