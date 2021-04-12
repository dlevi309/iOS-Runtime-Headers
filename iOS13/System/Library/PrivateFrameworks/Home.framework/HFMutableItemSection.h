/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemSection.h>

@class NSString, NSAttributedString, NSArray, NSDictionary;

@interface HFMutableItemSection : HFItemSection

@property (nonatomic,copy) NSString * headerTitle; 
@property (nonatomic,copy) NSString * footerTitle; 
@property (nonatomic,copy) NSAttributedString * attributedFooterTitle; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSDictionary * userInfo; 
-(void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2 ;
-(void)setItemsUsingDefaultSortComparator:(id)arg1 ;
@end

