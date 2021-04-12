/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) SCD_Struct_UI94 styling; 
@property (assign,nonatomic) int emptyFields;                                //@synthesize emptyFields=_emptyFields - In the implementation block
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSSet * transformationIdentifiers;              //@synthesize transformationIdentifiers=_transformationIdentifiers - In the implementation block
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI94)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI94)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(CGSize)arg4 ;
+(id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
+(id)tokenForKeyMask:(id)arg1 style:(SCD_Struct_UI94)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
+(id)tokenForKeyplane:(id)arg1 ;
-(BOOL)hasKey;
-(long long)renderFlags;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2 ;
-(BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2 ;
-(int)_writeString:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeEdgeInsets:(UIEdgeInsets)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeArray:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(void)setDisplayHint:(int)arg1 ;
-(id)initWithComponents:(id)arg1 name:(id)arg2 ;
-(CGSize)size;
-(id)stringForKey:(id)arg1 state:(int)arg2 ;
-(SCD_Struct_UI94)styling;
-(double)scale;
-(int)emptyFields;
-(void)setSize:(CGSize)arg1 ;
-(id)stringForSplitState:(BOOL)arg1 handBias:(long long)arg2 ;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(NSString *)name;
-(void)resetAnnotations;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)stringForConstruction:(/*^block*/id)arg1 ;
-(id)stringForState:(int)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setStyling:(SCD_Struct_UI94)arg1 ;
-(void)setRenderFlags:(long long)arg1 ;
-(NSString *)string;
-(id)stringForComponentArray:(id)arg1 additionalValues:(/*^block*/id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(void)setEmptyFields:(int)arg1 ;
-(NSSet *)transformationIdentifiers;
-(void)setTransformationIdentifiers:(NSSet *)arg1 ;
-(int)_writeNumber:(float)arg1 toStr:(char*)arg2 ;
-(int)rowHint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)displayHint;
-(void)dealloc;
-(void)setRowHint:(int)arg1 ;
@end

