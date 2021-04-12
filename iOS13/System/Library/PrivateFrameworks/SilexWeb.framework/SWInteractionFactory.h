/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWInteractionFactory.h>

@protocol SWInteractionFactory <NSObject>
@required
-(id)interactionForDictionary:(id)arg1;

@end


@protocol SWNavigationManager;
@class NSString;

@interface SWInteractionFactory : NSObject <SWInteractionFactory> {

	id<SWNavigationManager> _navigationManager;

}

@property (nonatomic,readonly) id<SWNavigationManager> navigationManager;              //@synthesize navigationManager=_navigationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWNavigationManager>)navigationManager;
-(id)interactionForDictionary:(id)arg1 ;
-(id)initWithNavigationManager:(id)arg1 ;
@end

