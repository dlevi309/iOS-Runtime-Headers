/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {

	CGSize _size;
	SCD_Union_UI95 _style;
	NSString* _geometrySetName;
	NSString* _keySetName;
	NSString* _cachedGestureKeySetName;
	NSString* _annotations;
	NSString* _locale;

}
+(id)tokenForKeyplane:(id)arg1 ;
-(BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2 ;
-(CGSize)size;
-(SCD_Struct_UI94)styling;
-(void)setSize:(CGSize)arg1 ;
-(id)stringForSplitState:(BOOL)arg1 handBias:(long long)arg2 ;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(void)setStyling:(SCD_Struct_UI94)arg1 ;
-(id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2 ;
-(void)dealloc;
@end

