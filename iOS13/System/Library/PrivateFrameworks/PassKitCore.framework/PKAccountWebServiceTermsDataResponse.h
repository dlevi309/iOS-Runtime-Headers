/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceTermsDataResponse : PKAccountWebServiceResponse {

	NSData* _termsData;
	NSString* _termsDataFileName;

}

@property (nonatomic,retain) NSData * termsData;                      //@synthesize termsData=_termsData - In the implementation block
@property (nonatomic,copy) NSString * termsDataFileName;              //@synthesize termsDataFileName=_termsDataFileName - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)termsData;
-(void)setTermsData:(NSData *)arg1 ;
-(NSString *)termsDataFileName;
-(void)setTermsDataFileName:(NSString *)arg1 ;
@end

