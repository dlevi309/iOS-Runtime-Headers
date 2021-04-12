/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIActivityIndicatorView, UIImageView, NSURLSessionDataTask, WFGiphyObject;

@interface WFGiphyCell : UICollectionViewCell {

	UIActivityIndicatorView* _indicatorView;
	UIImageView* _imageView;
	UIImageView* _selectedImageView;
	NSURLSessionDataTask* _dataTask;
	WFGiphyObject* _object;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * selectedImageView;                      //@synthesize selectedImageView=_selectedImageView - In the implementation block
@property (assign,nonatomic,__weak) NSURLSessionDataTask * dataTask;                      //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) WFGiphyObject * object;                               //@synthesize object=_object - In the implementation block
-(WFGiphyObject *)object;
-(void)setObject:(WFGiphyObject *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(UIActivityIndicatorView *)indicatorView;
-(void)setIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIImageView *)selectedImageView;
-(void)setSelectedImageView:(UIImageView *)arg1 ;
@end

