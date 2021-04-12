/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXSubscribeAction.h>

@protocol SXSubscribeAction <SXAction>
@property (nonatomic,readonly) id<SXAction> postPurchaseAction; 
@required
-(id<SXAction>)postPurchaseAction;

@end


@protocol SXAction;
@class NSString;

@interface SXSubscribeAction : NSObject <SXSubscribeAction> {

	id<SXAction> postPurchaseAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) id<SXAction> postPurchaseAction; 
-(NSString *)type;
-(id<SXAction>)postPurchaseAction;
@end

