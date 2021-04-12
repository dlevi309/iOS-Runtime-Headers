/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSBusinessItemFetching.h>

@class BCSBusinessQueryService, NSString;

@interface CPSBusinessItemFetcher : NSObject <CPSBusinessItemFetching> {

	BCSBusinessQueryService* _businessQueryService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchBusinessMetadataForURL:(id)arg1 availabilityHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchBusinessMetadataForURLHash:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchBusinessMetadataForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

