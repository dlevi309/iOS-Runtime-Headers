/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@protocol CNCancelable;
@class UIImageView;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {

	BOOL _shouldUseMapTiles;
	UIImageView* _mapImageView;
	id<CNCancelable> _tileGeneratorToken;

}

@property (nonatomic,retain) UIImageView * mapImageView;                       //@synthesize mapImageView=_mapImageView - In the implementation block
@property (nonatomic,retain) id<CNCancelable> tileGeneratorToken;              //@synthesize tileGeneratorToken=_tileGeneratorToken - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMapTiles;                           //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setProperty:(id)arg1 ;
-(id)variableConstraints;
-(BOOL)shouldUseMapTiles;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
-(BOOL)supportsTintColorValue;
-(void)setMapImage:(id)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(UIImageView *)mapImageView;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(id<CNCancelable>)tileGeneratorToken;
-(void)setTileGeneratorToken:(id<CNCancelable>)arg1 ;
@end

