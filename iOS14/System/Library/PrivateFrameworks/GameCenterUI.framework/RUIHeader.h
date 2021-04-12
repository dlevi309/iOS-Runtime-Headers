/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol RUIHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(id)headerLabel;
-(void)setIconImage:(id)arg1;
-(void)setImageAlignment:(int)arg1;
-(void)setImageSize:(CGSize)arg1;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@required
-(id)initWithAttributes:(id)arg1;

@end

