/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)description;
-(NSRange)originalRange;
@end

