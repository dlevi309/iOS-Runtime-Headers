/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
@class AMSUIDynamicImpressionMetrics;

@interface AMSUIDynamicImpressionItem : NSObject {

	AMSUIDynamicImpressionMetrics* _impressionMetrics;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                                                   //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain) AMSUIDynamicImpressionMetrics * impressionMetrics;              //@synthesize impressionMetrics=_impressionMetrics - In the implementation block
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 impressionMetrics:(id)arg2 ;
-(AMSUIDynamicImpressionMetrics *)impressionMetrics;
-(void)setImpressionMetrics:(AMSUIDynamicImpressionMetrics *)arg1 ;
@end

