/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/INIntentDelivererDelegate.h>
#import <libobjc.A.dylib/INIntentDelivererDataSource.h>

@class INIntentDeliverer, UIApplication, NSString;

@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDelivererDelegate, INIntentDelivererDataSource> {

	id _handlerForIntent;
	INIntentDeliverer* _intentDeliverer;
	SCD_Struct_IN0 _currentHostProcessAuditToken;
	UIApplication* _application;

}

@property (nonatomic,retain) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setApplication:(UIApplication *)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(void)executeAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIApplication *)application;
-(SCD_Struct_IN0)auditTokenForIntentDeliverer:(id)arg1 ;
-(void)intentDeliverer:(id)arg1 deliverIntent:(id)arg2 withBlock:(/*^block*/id)arg3 ;
@end

