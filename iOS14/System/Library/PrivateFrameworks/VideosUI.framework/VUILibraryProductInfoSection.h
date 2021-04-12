/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)layoutType;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(double)lineSpacing;
-(UIView *)headerContentView;
-(void)setLineSpacing:(double)arg1 ;
-(void)setLayoutType:(long long)arg1 ;
-(UIEdgeInsets)headerPadding;
-(NSArray *)dataViews;
-(UIEdgeInsets)headerMargin;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setDataViews:(NSArray *)arg1 ;
-(void)setHeaderPadding:(UIEdgeInsets)arg1 ;
@end

