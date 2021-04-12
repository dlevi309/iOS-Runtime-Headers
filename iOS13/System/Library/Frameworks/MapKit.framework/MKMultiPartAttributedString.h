/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2 ;
+(id)multiPartAttributedStringWithString:(id)arg1 ;
+(id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)components;
-(NSAttributedString *)attributedString;
-(NSArray *)separators;
-(id)initWithComponents:(id)arg1 separators:(id)arg2 ;
@end

