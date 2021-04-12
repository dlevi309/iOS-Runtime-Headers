/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 size:(CGSize)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

