/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/_UICollectionViewOutlineCell.h>

@class NSString;

@interface VUIOutlineMenuCollectionViewCell : _UICollectionViewOutlineCell {

	BOOL _shouldAppearAsHeader;
	NSString* _title;
	NSString* _imageName;

}

@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * imageName;                   //@synthesize imageName=_imageName - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearAsHeader;              //@synthesize shouldAppearAsHeader=_shouldAppearAsHeader - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setShouldAppearAsHeader:(BOOL)arg1 ;
-(BOOL)shouldAppearAsHeader;
@end

