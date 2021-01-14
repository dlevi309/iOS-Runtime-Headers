/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UINavigationItem *)navigationItem;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)leftItems;
-(void)setRightItems:(NSArray *)arg1 ;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(NSArray *)rightItems;
-(BOOL)hidesBackButton;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(NSString *)title;
-(NSString *)spinningTitle;
-(void)setSpinningTitle:(NSString *)arg1 ;
@end

