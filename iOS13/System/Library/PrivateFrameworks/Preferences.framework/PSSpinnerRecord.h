/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSArray, UINavigationItem;

@interface PSSpinnerRecord : NSObject {

	BOOL _hidesBackButton;
	NSArray* _rightItems;
	NSArray* _leftItems;
	UINavigationItem* _navigationItem;

}

@property (nonatomic,copy) NSArray * rightItems;                             //@synthesize rightItems=_rightItems - In the implementation block
@property (nonatomic,copy) NSArray * leftItems;                              //@synthesize leftItems=_leftItems - In the implementation block
@property (nonatomic,retain) UINavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic) BOOL hidesBackButton;                           //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
-(BOOL)hidesBackButton;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(UINavigationItem *)navigationItem;
-(NSArray *)rightItems;
-(void)setRightItems:(NSArray *)arg1 ;
-(NSArray *)leftItems;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
@end

