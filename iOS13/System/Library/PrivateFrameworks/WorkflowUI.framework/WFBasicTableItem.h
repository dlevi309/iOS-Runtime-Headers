/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTableItem.h>

@class NSString, UIImage;

@interface WFBasicTableItem : WFTableItem {

	NSString* _primaryText;
	NSString* _secondaryText;
	UIImage* _image;
	unsigned long long _primaryTextStyle;

}

@property (nonatomic,copy) NSString * primaryText;                             //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                           //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long primaryTextStyle;              //@synthesize primaryTextStyle=_primaryTextStyle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)configureCell:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4 ;
-(void)setPrimaryTextStyle:(unsigned long long)arg1 ;
-(unsigned long long)primaryTextStyle;
@end

