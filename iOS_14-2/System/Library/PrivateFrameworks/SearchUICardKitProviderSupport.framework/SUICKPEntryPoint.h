/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <libobjc.A.dylib/CRKIdentifiedProviding.h>

@class SUICKPCardViewControllerProvider, NSString;

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding> {

	SUICKPCardViewControllerProvider* _cardViewControllerProvider;

}

@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)providerIdentifier;
-(id)init;
-(unsigned long long)displayPriorityForCard:(id)arg1 ;
-(id)cardViewControllerForCard:(id)arg1 ;
-(void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3 ;
-(void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

