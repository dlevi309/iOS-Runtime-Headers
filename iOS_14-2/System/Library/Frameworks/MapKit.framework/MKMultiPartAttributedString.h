/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSArray;

@interface MKMultiPartAttributedString : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	NSArray* _components;
	NSArray* _separators;

}

@property (nonatomic,copy,readonly) NSArray * components;                          //@synthesize components=_components - In the implementation block
@property (nonatomic,copy,readonly) NSArray * separators;                          //@synthesize separators=_separators - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 ;
+(id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2 ;
+(id)multiPartAttributedStringWithString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(id)debugDescription;
-(NSArray *)components;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)separators;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithComponents:(id)arg1 separators:(id)arg2 ;
@end

