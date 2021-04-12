/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXHost.h>

@class UIApplication, NSString;

@interface SXHostApplication : NSObject <SXHost> {

	UIApplication* _application;

}

@property (assign,nonatomic,__weak) UIApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL active; 
-(BOOL)active;
-(BOOL)canOpenURL:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

