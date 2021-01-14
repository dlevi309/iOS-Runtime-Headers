/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXUIWidgetBar.h>
#import <libobjc.A.dylib/PXUIWidgetHeaderViewDelegate.h>

@class NSString;

@interface PXUIWidgetHeaderBar : PXUIWidgetBar <PXUIWidgetHeaderViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpec:(id)arg1 ;
-(void)setCaption:(id)arg1 ;
-(id)createView;
-(double)viewHeight;
-(void)widgetHeaderView:(id)arg1 didSelectSubtitle:(id)arg2 ;
-(void)widgetHeaderView:(id)arg1 didSelectCaption:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(void)updateView;
-(void)setDisclosureTitle:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
@end

