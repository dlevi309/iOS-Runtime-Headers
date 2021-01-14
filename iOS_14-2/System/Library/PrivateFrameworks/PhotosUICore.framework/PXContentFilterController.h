/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXContentFilterState, NSString;


@protocol PXContentFilterController <NSObject>
@property (nonatomic,copy) PXContentFilterState * filterState; 
@property (nonatomic,readonly) BOOL filteringIsActive; 
@property (nonatomic,readonly) NSString * filteringLocalizedCaption; 
@property (nonatomic,readonly) NSString * filteringLocalizedTitle; 
@optional
-(void)showContentFilterUIFromRect:(CGRect)arg1 inView:(id)arg2;

@required
-(PXContentFilterState *)filterState;
-(void)setFilterState:(id)arg1;
-(BOOL)filteringIsActive;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
-(NSString *)filteringLocalizedCaption;
-(NSString *)filteringLocalizedTitle;

@end

