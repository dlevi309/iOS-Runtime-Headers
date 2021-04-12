/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/_SFPopoverSourceInfo.h>

@class UIView, NSString, UIBarButtonItem;

@interface _SFUIViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {

	UIView* _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect popoverSourceRect; 
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
-(id)initWithView:(id)arg1 ;
-(UIView *)popoverSourceView;
-(CGRect)popoverSourceRect;
@end

