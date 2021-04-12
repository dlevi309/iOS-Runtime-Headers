/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIView, NSArray;

@interface UITableViewSection : NSObject <NSCoding> {

	NSString* _headerTitle;
	UIView* _headerView;
	NSString* _footerTitle;
	UIView* _footerView;
	NSArray* _rows;

}

@property (nonatomic,copy) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) UIView * headerView;               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;              //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,retain) UIView * footerView;               //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSArray * rows;                      //@synthesize rows=_rows - In the implementation block
+(id)sectionWithRows:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSString *)footerTitle;
-(void)setFooterTitle:(NSString *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

