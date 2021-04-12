/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXHost.h>

@class UIApplication, NSString;

@interface SXHostApplication : NSObject <SXHost> {

	UIApplication* _application;

}

@property (assign,nonatomic,__weak) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setApplication:(UIApplication *)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithApplication:(id)arg1 ;
-(BOOL)active;
-(UIApplication *)application;
@end

