/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIImage, UIColor;

@interface PXUIContentFilterControllerCell : UITableViewCell {

	long long _filterItemTag;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) UIColor * iconTintColor; 
@property (assign,nonatomic) long long filterItemTag; 
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setIconTintColor:(UIColor *)arg1 ;
-(UIColor *)iconTintColor;
-(void)setFilterItemTag:(long long)arg1 ;
-(long long)filterItemTag;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

