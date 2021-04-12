/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString, UIView, NSArray;

@interface VUILibraryProductInfoSection : NSObject {

	NSString* _groupName;
	UIView* _headerContentView;
	NSArray* _dataViews;
	double _lineSpacing;
	long long _layoutType;
	UIEdgeInsets _headerPadding;

}

@property (assign,nonatomic) double lineSpacing;                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerPadding;               //@synthesize headerPadding=_headerPadding - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets headerMargin; 
@property (assign,nonatomic) long long layoutType;                     //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,copy) NSString * groupName;                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) UIView * headerContentView;               //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,copy) NSArray * dataViews;                        //@synthesize dataViews=_dataViews - In the implementation block
+(id)headerViewWithString:(id)arg1 ;
+(id)dataViewWithString:(id)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
-(UIEdgeInsets)headerPadding;
-(UIView *)headerContentView;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderPadding:(UIEdgeInsets)arg1 ;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(NSArray *)dataViews;
-(void)setDataViews:(NSArray *)arg1 ;
@end

