/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>

@protocol HUTriggerActionBuilderEditorDelegate;
@class NSString;

@interface HUForwardingTriggerActionBuilderDelegate : NSObject <HUTriggerEditorDelegate> {

	id<HUTriggerActionBuilderEditorDelegate> _triggerActionBuilderEditorDelegate;

}

@property (assign,nonatomic,__weak) id<HUTriggerActionBuilderEditorDelegate> triggerActionBuilderEditorDelegate;              //@synthesize triggerActionBuilderEditorDelegate=_triggerActionBuilderEditorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(id)initWithTriggerActionBuilderEditorDelegate:(id)arg1 ;
-(void)setTriggerActionBuilderEditorDelegate:(id<HUTriggerActionBuilderEditorDelegate>)arg1 ;
-(id<HUTriggerActionBuilderEditorDelegate>)triggerActionBuilderEditorDelegate;
@end

