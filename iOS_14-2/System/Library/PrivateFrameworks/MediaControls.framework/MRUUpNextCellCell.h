/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, MPArtworkCatalog, UIImageView;

@interface MRUUpNextCellCell : UITableViewCell {

	NSString* _title;
	NSString* _subtitle;
	MPArtworkCatalog* _artworkCatalog;
	UIImageView* _artworkView;

}

@property (nonatomic,retain) UIImageView * artworkView;                      //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;              //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(UIImageView *)artworkView;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setArtworkView:(UIImageView *)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

