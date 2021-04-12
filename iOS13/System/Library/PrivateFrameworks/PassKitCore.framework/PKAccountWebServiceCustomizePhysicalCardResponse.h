/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)artworkOptions;
-(NSArray *)nameOptions;
-(NSArray *)priceOptions;
@end

