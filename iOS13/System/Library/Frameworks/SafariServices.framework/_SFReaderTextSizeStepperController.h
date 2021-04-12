/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFSettingsAlertStepperController.h>

@protocol SFReaderContext;
@class NSString;

@interface _SFReaderTextSizeStepperController : NSObject <_SFSettingsAlertStepperController> {

	id<SFReaderContext> _readerContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReaderContext:(id)arg1 ;
-(void)prepareStepper:(id)arg1 ;
-(void)incrementValue:(id)arg1 ;
-(void)decrementValue:(id)arg1 ;
-(void)_updateStepperControls:(id)arg1 ;
@end

