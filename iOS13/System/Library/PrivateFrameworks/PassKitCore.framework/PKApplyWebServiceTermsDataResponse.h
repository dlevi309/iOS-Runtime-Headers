/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSData, NSString;

@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse {

	NSData* _termsData;
	NSString* _termsDataFileName;

}

@property (nonatomic,retain) NSData * termsData;                      //@synthesize termsData=_termsData - In the implementation block
@property (nonatomic,copy) NSString * termsDataFileName;              //@synthesize termsDataFileName=_termsDataFileName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)termsData;
-(void)setTermsData:(NSData *)arg1 ;
-(NSString *)termsDataFileName;
-(void)setTermsDataFileName:(NSString *)arg1 ;
@end

