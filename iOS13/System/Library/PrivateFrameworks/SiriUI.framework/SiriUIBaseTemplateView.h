/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKitCore/UIView.h>
#import <SiriUI/SiriUITemplateView.h>

@protocol SiriUITemplatedView, SiriUITemplateModel;
@class NSString;

@interface SiriUIBaseTemplateView : UIView <SiriUITemplateView> {

	id<SiriUITemplatedView> _templatedSuperview;
	id<SiriUITemplateModel> _dataSource;

}

@property (assign,nonatomic,__weak) id<SiriUITemplateModel> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview;              //@synthesize templatedSuperview=_templatedSuperview - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(id<SiriUITemplateModel>)dataSource;
-(void)setDataSource:(id<SiriUITemplateModel>)arg1 ;
-(void)reloadData;
-(double)desiredHeight;
-(void)removeFromTemplatedSuperview;
-(id<SiriUITemplatedView>)templatedSuperview;
-(void)setTemplatedSuperview:(id<SiriUITemplatedView>)arg1 ;
@end

