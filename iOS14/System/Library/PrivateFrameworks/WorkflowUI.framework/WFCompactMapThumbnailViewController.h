/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class CLPlacemark;

@interface WFCompactMapThumbnailViewController : WFCompactThumbnailViewController {

	CLPlacemark* _placemark;

}

@property (nonatomic,readonly) CLPlacemark * placemark;              //@synthesize placemark=_placemark - In the implementation block
-(double)contentHeightForWidth:(double)arg1 ;
-(CLPlacemark *)placemark;
-(void)loadView;
-(id)initWithCLPlacemark:(id)arg1 ;
@end

