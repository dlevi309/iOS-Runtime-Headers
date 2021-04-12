/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSKModel.h>

@class NSString, TSSStylesheet, NSMutableDictionary;

@interface TSSTheme : TSPObject <TSKModel> {

	NSString* mThemeIdentifier;
	TSSStylesheet* mStylesheet;
	NSMutableDictionary* mPresetsByKind;

}

@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (assign,nonatomic) BOOL isLocked; 
@property (nonatomic,retain) NSString * themeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerPresetSourceClass:(Class)arg1 ;
+(id)presetSources;
+(id)presetBootstrapOrder;
+(id)themeWithContext:(id)arg1 alternate:(int)arg2 ;
+(void)registerPresetSourceClasses;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)isLocked;
-(id)colors;
-(NSString *)themeIdentifier;
-(void)setThemeIdentifier:(NSString *)arg1 ;
-(id)childEnumerator;
-(void)setIsLocked:(BOOL)arg1 ;
-(TSSStylesheet *)stylesheet;
-(id)modelPathComponentForChild:(id)arg1 ;
-(void)bootstrapThemeAlternate:(int)arg1 ;
-(void)disablePresetValidation;
-(void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)presetsOfKind:(id)arg1 ;
-(id)presetOfKind:(id)arg1 index:(unsigned long long)arg2 ;
-(void)setPresets:(id)arg1 ofKind:(id)arg2 ;
-(unsigned long long)indexOfPreset:(id)arg1 ;
-(id)p_identifierForBootstrapTheme:(int)arg1 ;
-(BOOL)hasPresetsOfKind:(id)arg1 ;
-(void)enablePresetValidation;
-(void)addPreset:(id)arg1 ofKind:(id)arg2 ;
-(void)removePreset:(id)arg1 ;
-(void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(BOOL)containsCGColor:(CGColorRef)arg1 ;
-(void)checkThemeStylesheetConsistency;
@end

