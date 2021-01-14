/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI95 _style;
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
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI94)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI94)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(BOOL)hasKey;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(BOOL)arg2 ;
-(void)setDisplayHint:(int)arg1 ;
-(CGSize)size;
-(SCD_Struct_UI94)styling;
-(void)setSize:(CGSize)arg1 ;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(void)resetAnnotations;
-(void)annotateWithString:(id)arg1 ;
-(void)setStyling:(SCD_Struct_UI94)arg1 ;
-(id)string;
-(id)_stringWithAdditionalValues:(/*^block*/id)arg1 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI94)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(int)rowHint;
-(int)displayHint;
-(void)dealloc;
-(void)setRowHint:(int)arg1 ;
@end

