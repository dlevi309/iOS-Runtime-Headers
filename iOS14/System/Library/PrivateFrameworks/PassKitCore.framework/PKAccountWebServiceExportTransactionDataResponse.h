/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse {

	NSData* _transactionData;
	NSString* _transactionDataFilename;
	NSString* _transactionDataHash;

}

@property (nonatomic,copy,readonly) NSData * transactionData;                        //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionDataFilename;              //@synthesize transactionDataFilename=_transactionDataFilename - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionDataHash;                  //@synthesize transactionDataHash=_transactionDataHash - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)transactionDataFilename;
-(NSString *)transactionDataHash;
-(NSData *)transactionData;
@end

