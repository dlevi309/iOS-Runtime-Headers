/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray;

@interface SKTextureAtlas : NSObject <NSSecureCoding> {

	NSDictionary* _textureDict;
	NSString* _atlasName;
	BOOL _isCUIImageAtlas;
	unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > >* _textureMap;

}

@property (nonatomic,readonly) NSArray * textureNames; 
+(BOOL)supportsSecureCoding;
+(id)atlasWithDictionary:(id)arg1 ;
+(id)lookupCachedTextureNamed:(id)arg1 ;
+(id)atlasNamed:(id)arg1 ;
+(CGImageRef)createCGImageFromCUINamedImage:(CGImageRef)arg1 withSize:(CGSize)arg2 atRect:(CGRect)arg3 ;
+(id)findTextureNamed:(id)arg1 ;
+(BOOL)canUseObjectForAtlas:(id)arg1 ;
+(void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2 ;
+(id)getSupportedPostfixes;
+(void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(BOOL)arg3 ;
+(void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 ;
-(void)unload;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)textureNamed:(id)arg1 ;
-(void)commonInit;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)preloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadTextures;
-(id)_copyImageData;
-(void)_prePopulateCache;
-(void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2 ;
-(void)loadTexturesFromCUIImageAtlas:(id)arg1 ;
-(id)createTextureFromProvider:(CGImageProviderRef)arg1 andSource:(CGImageRef)arg2 ;
-(id)createSubTextureFromTexture:(id)arg1 andCUINamedImage:(id)arg2 andOrigin:(CGPoint)arg3 ;
-(id)findTextureNamedFromAtlas:(id)arg1 ;
-(BOOL)isEqualToTextureAtlas:(id)arg1 ;
-(NSArray *)textureNames;
@end

