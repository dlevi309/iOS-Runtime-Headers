/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

