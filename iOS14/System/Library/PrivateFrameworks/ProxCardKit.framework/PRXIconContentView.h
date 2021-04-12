/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/PRXCardContentView.h>

@class NSArray, UILayoutGuide, PRXLabel;

@interface PRXIconContentView : PRXCardContentView {

	NSArray* _imageViewsConstraints;
	NSArray* _bodyLabelConstraints;
	UILayoutGuide* _imageViewsGuide;
	NSArray* _imageViews;
	PRXLabel* _bodyLabel;

}

@property (nonatomic,copy) NSArray * imageViews;                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) PRXLabel * bodyLabel;              //@synthesize bodyLabel=_bodyLabel - In the implementation block
-(void)updateConstraints;
-(PRXLabel *)bodyLabel;
-(NSArray *)imageViews;
-(void)setBodyLabel:(PRXLabel *)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(id)initWithCardStyle:(long long)arg1 ;
@end

