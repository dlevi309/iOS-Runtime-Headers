/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) id<SXAction> postPurchaseAction; 
@property (nonatomic,readonly) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)type;
-(id<SXAction>)postPurchaseAction;
@end

