/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSSPreset.h>
#import <TSReading/TSSStyleClient.h>
#import <TSReading/TSKModel.h>

@class TSTTableStyleNetwork, NSString;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {

	unsigned long long mIndex;
	TSTTableStyleNetwork* mStyleNetwork;

}

@property (assign,nonatomic) unsigned long long index; 
@property (nonatomic,copy) TSTTableStyleNetwork * styleNetwork; 
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)index;
-(id)initWithContext:(id)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)presetKind;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(TSTTableStyleNetwork *)styleNetwork;
-(id)p_documentRoot;
-(id)styleNetworkInStylesheet:(id)arg1 ;
-(void)setStyleNetwork:(TSTTableStyleNetwork *)arg1 ;
-(id)initWithStyleNetwork:(id)arg1 index:(unsigned long long)arg2 ;
-(id)swatchImage;
@end

