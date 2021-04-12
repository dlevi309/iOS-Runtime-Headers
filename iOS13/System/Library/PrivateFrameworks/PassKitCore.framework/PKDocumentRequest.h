/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, DIAttributeDocument;

@interface PKDocumentRequest : NSObject {

	unsigned long long _documentType;
	NSString* _countryCode;
	DIAttributeDocument* _documentAttribute;

}

@property (assign,nonatomic) unsigned long long documentType;                      //@synthesize documentType=_documentType - In the implementation block
@property (assign,nonatomic) NSString * countryCode;                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) DIAttributeDocument * documentAttribute;              //@synthesize documentAttribute=_documentAttribute - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(DIAttributeDocument *)documentAttribute;
-(void)setDocumentAttribute:(DIAttributeDocument *)arg1 ;
@end

