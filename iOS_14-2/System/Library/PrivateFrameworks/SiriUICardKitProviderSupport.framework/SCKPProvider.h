/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
*/

#import <libobjc.A.dylib/CRKIdentifiedProviding.h>

@class NSString;

@interface SCKPProvider : NSObject <CRKIdentifiedProviding>

@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)providerIdentifier;
-(id)init;
-(void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

