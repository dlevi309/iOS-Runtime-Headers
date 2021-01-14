/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse {

	NSArray* _artworkOptions;
	NSArray* _nameOptions;
	NSArray* _priceOptions;

}

@property (nonatomic,copy,readonly) NSArray * artworkOptions;              //@synthesize artworkOptions=_artworkOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nameOptions;                 //@synthesize nameOptions=_nameOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceOptions;                //@synthesize priceOptions=_priceOptions - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)nameOptions;
-(NSArray *)artworkOptions;
-(NSArray *)priceOptions;
@end

