/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateStepperControls:(id)arg1 ;
-(id)initWithReaderContext:(id)arg1 ;
-(void)prepareStepper:(id)arg1 ;
-(void)incrementValue:(id)arg1 ;
-(void)decrementValue:(id)arg1 ;
@end

