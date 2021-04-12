/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSArray, NSString;

@interface STSHeaderView : UICollectionReusableView {

	UILabel* _label;
	NSArray* _constraints;
	NSString* _title;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setTitle:(NSString *)arg1 ;
-(void)updateConstraints;
-(NSString *)title;
@end

