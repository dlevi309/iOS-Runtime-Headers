/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGSize size;                                             //@synthesize size=_size - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 size:(CGSize)arg2 ;
@end

