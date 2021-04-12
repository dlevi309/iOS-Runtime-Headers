/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/

#import <CardServices/_CRSServiceBundle.h>
#import <libobjc.A.dylib/CRSCardServing.h>

@protocol CRSCardServing;
@class NSString;

@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing> {

	id<CRSCardServing> _cardService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)underlyingService;
-(BOOL)canSatisfyCardRequest:(id)arg1 ;
-(unsigned long long)servicePriorityForRequest:(id)arg1 ;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_initializeCardServiceWithClass:(Class)arg1 ;
@end

