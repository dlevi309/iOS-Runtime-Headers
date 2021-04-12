/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAdControllerContainer.h>

@protocol SXAdControllerContainer <SXAdControllerProvider>
@required
-(void)registerAdController:(id)arg1;

@end


@class SXAdController, NSString;

@interface SXAdControllerContainer : NSObject <SXAdControllerContainer> {

	SXAdController* _adController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXAdController * adController;              //@synthesize adController=_adController - In the implementation block
-(SXAdController *)adController;
-(void)registerAdController:(id)arg1 ;
@end

