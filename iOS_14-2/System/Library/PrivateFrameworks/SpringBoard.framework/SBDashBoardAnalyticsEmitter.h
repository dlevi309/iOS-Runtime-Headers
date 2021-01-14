/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class CSCoverSheetViewController, NSString;

@interface SBDashBoardAnalyticsEmitter : NSObject <CSExternalEventHandling> {

	CSCoverSheetViewController* _coverSheetViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)conformsToCSEventHandling;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)participantState;
-(void)dealloc;
@end

