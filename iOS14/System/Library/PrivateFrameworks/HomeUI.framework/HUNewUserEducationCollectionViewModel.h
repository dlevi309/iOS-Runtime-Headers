/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class UIColor, HUNewUserEducationFlowLayoutModel;

@interface HUNewUserEducationCollectionViewModel : NSObject {

	BOOL _showsVerticalScrollIndicator;
	BOOL _showsHorizontalScrollIndicator;
	UIColor* _backgroundColor;
	double _decelerationRate;
	HUNewUserEducationFlowLayoutModel* _layoutModel;
	long long _numberOfItemsInSection;
	long long _numberOfSections;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) double decelerationRate;                                      //@synthesize decelerationRate=_decelerationRate - In the implementation block
@property (nonatomic,readonly) HUNewUserEducationFlowLayoutModel * layoutModel;              //@synthesize layoutModel=_layoutModel - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsInSection;                             //@synthesize numberOfItemsInSection=_numberOfItemsInSection - In the implementation block
@property (nonatomic,readonly) long long numberOfSections;                                   //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) BOOL showsVerticalScrollIndicator;                            //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
@property (nonatomic,readonly) BOOL showsHorizontalScrollIndicator;                          //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(long long)numberOfSections;
-(UIColor *)backgroundColor;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(double)decelerationRate;
-(HUNewUserEducationFlowLayoutModel *)layoutModel;
-(long long)numberOfItemsInSection;
@end

