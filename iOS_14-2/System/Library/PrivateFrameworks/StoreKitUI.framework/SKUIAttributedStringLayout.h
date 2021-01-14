/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICachedLayout.h>

@class NSAttributedString, NSStringDrawingContext, NSShadow, NSString;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {

	NSAttributedString* _attributedString;
	CGSize _boundingSize;
	NSStringDrawingContext* _context;
	double _topInset;
	BOOL _usesTallCharacterSet;
	UIEdgeInsets _edgeInsetsForShadow;
	NSShadow* _shadow;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;                      //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double firstBaselineOffset; 
@property (nonatomic,readonly) CGSize boundingSize;                                        //@synthesize boundingSize=_boundingSize - In the implementation block
@property (nonatomic,readonly) long long numberOfLines; 
@property (nonatomic,readonly) NSStringDrawingContext * stringDrawingContext;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) double topInset;                                            //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) BOOL usesTallCharacterSet;                                  //@synthesize usesTallCharacterSet=_usesTallCharacterSet - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsForShadow;                           //@synthesize edgeInsetsForShadow=_edgeInsetsForShadow - In the implementation block
@property (nonatomic,readonly) NSShadow * shadow;                                          //@synthesize shadow=_shadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSShadow *)shadow;
-(double)topInset;
-(NSAttributedString *)attributedString;
-(double)firstBaselineOffset;
-(double)baselineOffset;
-(CGSize)boundingSize;
-(long long)numberOfLines;
-(NSStringDrawingContext *)stringDrawingContext;
-(id)initWithLayoutRequest:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForShadow;
-(BOOL)usesTallCharacterSet;
@end

