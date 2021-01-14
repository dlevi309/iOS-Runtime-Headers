/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXUIWidgetBar.h>
#import <libobjc.A.dylib/PXUIWidgetFooterViewDelegate.h>

@class NSString;

@interface PXUIWidgetFooterBar : PXUIWidgetBar <PXUIWidgetFooterViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpec:(id)arg1 ;
-(id)createView;
-(double)viewHeight;
-(void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2 ;
-(void)updateView;
-(void)setDisclosureTitle:(id)arg1 ;
@end

