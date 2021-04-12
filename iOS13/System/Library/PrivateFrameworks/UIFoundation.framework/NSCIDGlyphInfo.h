/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/NSGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding> {

	unsigned short _cid;
	unsigned long long _collection;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)characterIdentifier;
-(unsigned long long)characterCollection;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
@end

