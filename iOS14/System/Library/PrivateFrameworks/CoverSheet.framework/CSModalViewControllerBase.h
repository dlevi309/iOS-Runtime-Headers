/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)presentationStyle;
-(long long)presentationPriority;
-(BOOL)isPortrait;
-(void)aggregateBehavior:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(id)view;
-(long long)presentationType;
-(void)viewDidLoad;
-(id)viewIfLoaded;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
@end

