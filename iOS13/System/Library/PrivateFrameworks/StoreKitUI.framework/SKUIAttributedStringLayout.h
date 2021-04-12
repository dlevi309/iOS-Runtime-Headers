/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSAttributedString *)attributedString;
-(double)baselineOffset;
-(double)firstBaselineOffset;
-(long long)numberOfLines;
-(double)topInset;
-(CGSize)boundingSize;
-(id)initWithLayoutRequest:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForShadow;
-(NSStringDrawingContext *)stringDrawingContext;
-(BOOL)usesTallCharacterSet;
@end

