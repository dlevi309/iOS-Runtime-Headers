/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@class NSArray, UINavigationItem, NSString;

@interface RUISpinnerRecord : NSObject {

	BOOL _hidesBackButton;
	NSArray* _rightItems;
	NSArray* _leftItems;
	UINavigationItem* _navigationItem;
	NSString* _title;
	NSString* _spinningTitle;

}

@property (nonatomic,copy) NSArray * rightItems;                             //@synthesize rightItems=_rightItems - In the implementation block
@property (nonatomic,copy) NSArray * leftItems;                              //@synthesize leftItems=_leftItems - In the implementation block
@property (nonatomic,retain) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic) BOOL hidesBackButton;                           //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * spinningTitle;                         //@synthesize spinningTitle=_spinningTitle - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)hidesBackButton;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(UINavigationItem *)navigationItem;
-(NSArray *)rightItems;
-(void)setRightItems:(NSArray *)arg1 ;
-(NSArray *)leftItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(NSString *)spinningTitle;
-(void)setSpinningTitle:(NSString *)arg1 ;
@end

