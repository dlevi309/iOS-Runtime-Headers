/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SKBitmapFont : NSObject <NSSecureCoding> {

	NSString* _fontName;
	NSString* _filePath;
	double _lineHeight;
	double _baseLine;
	NSArray* _characterSprites;
	map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *> > >* _characterSpriteByChar;
	map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double> > >* _characterAdvanceByChar;
	map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double> > >* _characterKerningByCharPair;
	BOOL _internal;
	NSString* _fileName;

}
+(BOOL)supportsSecureCoding;
+(id)fontForFileNamed:(id)arg1 ;
+(id)fontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
+(id)_fontForFileNamed:(id)arg1 ;
-(id)fontName;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(double)lineHeight;
-(id)initWithCoder:(id)arg1 ;
-(id)spriteForCharacterNamed:(unsigned short)arg1 ;
-(double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2 ;
-(double)advanceForCharacterNamed:(unsigned short)arg1 ;
-(BOOL)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2 ;
@end

