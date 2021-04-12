/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setDefaultTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultTextAttributes;
-(void)_tintColorDidChange;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(id)entryAttributedString;
-(id)_synthesizedAttributedString;
-(void)_invalidateSynthesizedAttributedString;
@end

