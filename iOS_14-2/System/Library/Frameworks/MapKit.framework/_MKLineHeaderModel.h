/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableArray, UIView, NSDictionary;

@interface _MKLineHeaderModel : NSObject {

	NSMutableArray* _tokens;
	BOOL _shouldUseEmptyPlaceholder;
	UIView* _ownerView;
	NSDictionary* _fontAttribute;
	/*^block*/id _colorProvider;

}

@property (assign,nonatomic,__weak) UIView * ownerView;                   //@synthesize ownerView=_ownerView - In the implementation block
@property (nonatomic,copy) NSDictionary * fontAttribute;                  //@synthesize fontAttribute=_fontAttribute - In the implementation block
@property (nonatomic,copy) id colorProvider;                              //@synthesize colorProvider=_colorProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldUseEmptyPlaceholder;              //@synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder - In the implementation block
-(void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addToken:(id)arg1 ;
-(id)init;
-(id)description;
-(UIView *)ownerView;
-(id)_placeCardHeaderSeparatorString;
-(id)colorProvider;
-(NSDictionary *)fontAttribute;
-(BOOL)shouldUseEmptyPlaceholder;
-(void)setOwnerView:(UIView *)arg1 ;
-(void)setShouldUseEmptyPlaceholder:(BOOL)arg1 ;
-(void)setColorProvider:(id)arg1 ;
-(id)contentAttributedString;
-(void)setFontAttribute:(NSDictionary *)arg1 ;
-(void)removeToken:(id)arg1 ;
@end

