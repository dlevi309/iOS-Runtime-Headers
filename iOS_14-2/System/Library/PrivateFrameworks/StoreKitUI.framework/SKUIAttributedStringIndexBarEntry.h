/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIIndexBarEntry.h>

@class NSAttributedString, NSDictionary;

@interface SKUIAttributedStringIndexBarEntry : SKUIIndexBarEntry {

	BOOL _hasValidSynthesizedAttributedString;
	NSAttributedString* _synthesizedAttributedString;
	NSAttributedString* _attributedString;
	NSDictionary* _defaultTextAttributes;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes;                        //@synthesize defaultTextAttributes=_defaultTextAttributes - In the implementation block
-(NSAttributedString *)attributedString;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(id)description;
-(id)initWithAttributedString:(id)arg1 ;
-(void)_tintColorDidChange;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(id)entryAttributedString;
-(id)_synthesizedAttributedString;
-(void)_invalidateSynthesizedAttributedString;
@end

