/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)characterIdentifier;
-(unsigned long long)characterCollection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
@end

