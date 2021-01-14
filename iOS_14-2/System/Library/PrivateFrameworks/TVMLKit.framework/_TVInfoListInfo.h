/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString, UIView, NSArray;

@interface _TVInfoListInfo : NSObject {

	NSString* _group;
	double _width;
	double _lineSpacing;
	UIView* _headerContentView;
	NSArray* _dataViews;
	UIEdgeInsets _headerMargin;
	UIEdgeInsets _headerPadding;

}

@property (nonatomic,copy) NSString * group;                          //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double width;                            //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double lineSpacing;                      //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;               //@synthesize headerMargin=_headerMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerPadding;              //@synthesize headerPadding=_headerPadding - In the implementation block
@property (nonatomic,retain) UIView * headerContentView;              //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,copy) NSArray * dataViews;                       //@synthesize dataViews=_dataViews - In the implementation block
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(double)lineSpacing;
-(UIView *)headerContentView;
-(void)setLineSpacing:(double)arg1 ;
-(UIEdgeInsets)headerPadding;
-(NSArray *)dataViews;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setDataViews:(NSArray *)arg1 ;
-(void)setHeaderPadding:(UIEdgeInsets)arg1 ;
@end

