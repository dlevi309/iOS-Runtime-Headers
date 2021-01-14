/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) SXAdController * adController;              //@synthesize adController=_adController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXAdController *)adController;
-(void)registerAdController:(id)arg1 ;
@end

