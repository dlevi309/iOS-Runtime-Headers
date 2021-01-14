/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UINavigationItem *)navigationItem;
-(NSArray *)leftItems;
-(void)setRightItems:(NSArray *)arg1 ;
-(void)setLeftItems:(NSArray *)arg1 ;
-(void)setNavigationItem:(UINavigationItem *)arg1 ;
-(NSArray *)rightItems;
-(BOOL)hidesBackButton;
-(void)setHidesBackButton:(BOOL)arg1 ;
@end

