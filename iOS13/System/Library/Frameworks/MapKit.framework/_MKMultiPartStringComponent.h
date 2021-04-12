/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSAttributedString;

@interface _MKMultiPartStringComponent : NSObject {

	NSAttributedString* _attributedString;
	NSRange _originalRange;
	NSRange _range;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) NSRange originalRange;                                   //@synthesize originalRange=_originalRange - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
-(id)description;
-(NSRange)range;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(void)setRange:(NSRange)arg1 ;
-(NSRange)originalRange;
@end

