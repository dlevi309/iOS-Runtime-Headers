/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBUIWidgetHost.h>

@protocol _SBUIWidgetHost;
@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost> {

	NSString* _widgetIdentifier;
	id<_SBUIWidgetHost> _widgetHost;

}

@property (nonatomic,copy) NSString * widgetIdentifier;                          //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<_SBUIWidgetHost> widgetHost;              //@synthesize widgetHost=_widgetHost - In the implementation block
@property (nonatomic,readonly) CGSize preferredViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_SBUIWidgetHost>)widgetHost;
-(NSString *)widgetIdentifier;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(void)setWidgetHost:(id<_SBUIWidgetHost>)arg1 ;
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(CGSize)preferredViewSize;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
@end

