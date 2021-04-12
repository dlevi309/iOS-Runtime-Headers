/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@protocol RUIHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(id)headerLabel;
-(void)setIconImage:(id)arg1;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setImageAlignment:(int)arg1;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@required
-(id)initWithAttributes:(id)arg1;

@end

