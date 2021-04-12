/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProperty:(id)arg1 ;
-(void)prepareForReuse;
-(void)setMapImage:(id)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(UIImageView *)mapImageView;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(void)generateAndSetMapTile;
-(id<CNCancelable>)tileGeneratorToken;
-(void)setTileGeneratorToken:(id<CNCancelable>)arg1 ;
-(BOOL)supportsTintColorValue;
-(id)variableConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)shouldUseMapTiles;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

