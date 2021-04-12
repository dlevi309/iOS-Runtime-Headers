/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>

@class NSString;

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(BOOL)isPortrait;
-(id)view;
-(long long)presentationStyle;
-(void)viewDidLoad;
-(id)viewIfLoaded;
-(long long)presentationType;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
@end

