/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject {

	BOOL _visible;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) BOOL visible;                 //@synthesize visible=_visible - In the implementation block
-(void)setVisible:(BOOL)arg1 ;
-(unsigned)effectType;
-(BOOL)visible;
-(NSString *)name;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_colorFromShapeEffectValue:(/*function pointer*/void*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

