/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, DIAttributeDocument;

@interface PKDocumentRequest : NSObject {

	unsigned long long _documentType;
	NSString* _countryCode;
	DIAttributeDocument* _documentAttribute;

}

@property (assign,nonatomic) unsigned long long documentType;                      //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) DIAttributeDocument * documentAttribute;              //@synthesize documentAttribute=_documentAttribute - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(DIAttributeDocument *)documentAttribute;
-(void)setDocumentAttribute:(DIAttributeDocument *)arg1 ;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(unsigned long long)documentType;
@end

