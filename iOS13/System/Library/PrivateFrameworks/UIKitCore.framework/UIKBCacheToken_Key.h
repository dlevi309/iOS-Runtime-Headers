/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI85 _style;
	NSString* _cacheDisplayString;
	NSString* _cacheSecondaryDisplayString;
	NSString* _annotationString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	unsigned long long _clipCorners;
	unsigned long long _groupNeighbors;
	BOOL _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI84)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI84)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(id)string;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(SCD_Struct_UI84)styling;
-(void)setStyling:(SCD_Struct_UI84)arg1 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(BOOL)hasKey;
-(void)resetAnnotations;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI84)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)annotateWithString:(id)arg1 ;
-(id)_stringWithAdditionalValues:(/*^block*/id)arg1 ;
@end

