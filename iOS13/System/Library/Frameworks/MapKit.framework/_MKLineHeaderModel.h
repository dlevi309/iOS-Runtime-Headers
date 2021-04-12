/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addToken:(id)arg1 ;
-(void)removeToken:(id)arg1 ;
-(void)setOwnerView:(UIView *)arg1 ;
-(void)setShouldUseEmptyPlaceholder:(BOOL)arg1 ;
-(void)setColorProvider:(id)arg1 ;
-(id)contentAttributedString;
-(void)setFontAttribute:(NSDictionary *)arg1 ;
-(id)_placeCardHeaderSeparatorString;
-(id)colorProvider;
-(UIView *)ownerView;
-(NSDictionary *)fontAttribute;
-(BOOL)shouldUseEmptyPlaceholder;
@end

