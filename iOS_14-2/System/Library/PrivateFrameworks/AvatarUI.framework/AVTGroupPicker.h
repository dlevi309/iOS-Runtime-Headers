/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class NSArray;


@protocol AVTGroupPicker <NSObject>
@property (nonatomic,readonly) NSArray * groupItems; 
@property (assign,nonatomic,__weak) id<AVTGroupPickerDelegate> delegate; 
@property (assign,nonatomic) long long selectedGroupIndex; 
@required
-(id)initWithFrame:(CGRect)arg1;
-(id<AVTGroupPickerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reloadData;
-(NSArray *)groupItems;
-(void)setSelectedGroupIndex:(long long)arg1 animated:(BOOL)arg2;
-(long long)selectedGroupIndex;
-(id)initWithGroupItems:(id)arg1 environment:(id)arg2;
-(void)setSelectedGroupIndex:(long long)arg1;
-(id)initWithCoder:(id)arg1;

@end

