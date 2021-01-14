/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/AKUserInterfaceItem.h>
#import <libobjc.A.dylib/AKLineWidthChooserUserInterfaceItem.h>
#import <libobjc.A.dylib/AKInkIsUpdatable.h>

@class UIImageView, NSString;

@interface AKUserInterfaceItemTableViewCell : UITableViewCell <AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable> {

	UIImageView* _imageView;
	double _lineWidth;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)wantsInkUpdate;
@end

