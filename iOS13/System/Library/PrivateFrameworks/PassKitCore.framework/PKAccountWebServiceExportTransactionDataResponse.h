/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)transactionData;
-(NSString *)transactionDataFilename;
-(NSString *)transactionDataHash;
@end

