/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSSet;

@interface UIKBCacheToken : NSObject <NSCopying> {

	NSMutableArray* _components;
	NSString* _name;
	double _scale;
	int _emptyFields;
	NSSet* _transformationIdentifiers;
	long long _renderFlags;

}

@property (nonatomic,readonly) NSString * string; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int rowHint; 
@property (assign,nonatomic) int displayHint; 
@property (assign,nonatomic) long long renderFlags;                          //@synthesize renderFlags=_renderFlags - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI84 styling; 
@property (assign,nonatomic) int emptyFields;                                //@synthesize emptyFields=_emptyFields - In the implementation block
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSSet * transformationIdentifiers;              //@synthesize transformationIdentifiers=_transformationIdentifiers - In the implementation block
+(id)tokenForKeyplane:(id)arg1 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI84)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI84)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(CGSize)arg4 ;
+(id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
+(id)tokenForKeyMask:(id)arg1 style:(SCD_Struct_UI84)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
-(NSString *)string;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(SCD_Struct_UI84)styling;
-(void)setStyling:(SCD_Struct_UI84)arg1 ;
-(id)initWithComponents:(id)arg1 name:(id)arg2 ;
-(int)_writeString:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeNumber:(float)arg1 toStr:(char*)arg2 ;
-(int)_writeEdgeInsets:(UIEdgeInsets)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeArray:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(id)stringForConstruction:(/*^block*/id)arg1 ;
-(id)stringForComponentArray:(id)arg1 additionalValues:(/*^block*/id)arg2 ;
-(int)emptyFields;
-(id)stringForState:(int)arg1 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2 ;
-(BOOL)hasKey;
-(void)resetAnnotations;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(id)stringForKey:(id)arg1 state:(int)arg2 ;
-(id)stringForSplitState:(BOOL)arg1 handBias:(long long)arg2 ;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2 ;
-(void)setEmptyFields:(int)arg1 ;
-(long long)renderFlags;
-(void)setRenderFlags:(long long)arg1 ;
-(NSSet *)transformationIdentifiers;
-(void)setTransformationIdentifiers:(NSSet *)arg1 ;
@end

