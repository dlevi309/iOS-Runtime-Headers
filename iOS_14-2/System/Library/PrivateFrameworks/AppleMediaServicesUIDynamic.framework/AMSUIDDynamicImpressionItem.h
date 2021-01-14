/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
*/


#import <AppleMediaServicesUIDynamic/AppleMediaServicesUIDynamic-Structs.h>
@class AMSUIDDynamicImpressionMetrics;

@interface AMSUIDDynamicImpressionItem : NSObject {

	 frame;
	 impressionMetrics;

}

@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) AMSUIDDynamicImpressionMetrics * impressionMetrics; 
-(id)init;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 impressionMetrics:(id)arg2 ;
-(AMSUIDDynamicImpressionMetrics *)impressionMetrics;
-(void)setImpressionMetrics:(AMSUIDDynamicImpressionMetrics *)arg1 ;
@end

