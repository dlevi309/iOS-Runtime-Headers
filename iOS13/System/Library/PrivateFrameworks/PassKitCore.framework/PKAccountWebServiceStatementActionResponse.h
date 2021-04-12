/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse : PKAccountWebServiceResponse {

	NSData* _statementPDFData;
	NSString* _statementDataFilename;
	NSString* _statementDataHash;

}

@property (nonatomic,copy,readonly) NSData * statementPDFData;                     //@synthesize statementPDFData=_statementPDFData - In the implementation block
@property (nonatomic,copy,readonly) NSString * statementDataFilename;              //@synthesize statementDataFilename=_statementDataFilename - In the implementation block
@property (nonatomic,copy,readonly) NSString * statementDataHash;                  //@synthesize statementDataHash=_statementDataHash - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)statementPDFData;
-(NSString *)statementDataFilename;
-(NSString *)statementDataHash;
@end

