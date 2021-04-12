/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse {

	NSArray* _passURLs;
	NSString* _lastUpdatedTag;
	NSArray* _devicePassSerialNumbers;

}

@property (nonatomic,copy) NSArray * passURLs;                             //@synthesize passURLs=_passURLs - In the implementation block
@property (nonatomic,copy) NSArray * devicePassSerialNumbers;              //@synthesize devicePassSerialNumbers=_devicePassSerialNumbers - In the implementation block
@property (nonatomic,copy) NSString * lastUpdatedTag;                      //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
-(NSArray *)passURLs;
-(NSArray *)devicePassSerialNumbers;
-(id)initWithData:(id)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(void)setPassURLs:(NSArray *)arg1 ;
-(void)setDevicePassSerialNumbers:(NSArray *)arg1 ;
-(NSString *)lastUpdatedTag;
@end

