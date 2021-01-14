/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, NSDate, NSTimeZone;

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	NSString* _fileFormat;
	NSDate* _beginDate;
	NSDate* _endDate;
	NSTimeZone* _productTimeZone;

}

@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * fileFormat;                     //@synthesize fileFormat=_fileFormat - In the implementation block
@property (nonatomic,copy) NSDate * beginDate;                        //@synthesize beginDate=_beginDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * productTimeZone;              //@synthesize productTimeZone=_productTimeZone - In the implementation block
-(NSDate *)endDate;
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSTimeZone *)productTimeZone;
-(NSDate *)beginDate;
-(void)setBeginDate:(NSDate *)arg1 ;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setFileFormat:(NSString *)arg1 ;
-(NSString *)fileFormat;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

