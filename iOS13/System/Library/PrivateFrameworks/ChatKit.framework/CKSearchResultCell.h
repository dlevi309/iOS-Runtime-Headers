/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSearchResultCell <NSObject>
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@required
+(id)reuseIdentifier;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
-(void)refreshForSearchTextIfNeeded:(id)arg1;

@end

