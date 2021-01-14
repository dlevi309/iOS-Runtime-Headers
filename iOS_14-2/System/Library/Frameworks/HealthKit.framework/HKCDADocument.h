/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSData, NSString;

@interface HKCDADocument : NSObject {

	NSData* _internalDocumentData;
	NSData* _compressedDocumentData;
	NSString* _title;
	NSString* _patientName;
	NSString* _authorName;
	NSString* _custodianName;

}

@property (copy,readonly) NSData * documentData; 
@property (copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * patientName;                //@synthesize patientName=_patientName - In the implementation block
@property (copy,readonly) NSString * authorName;                 //@synthesize authorName=_authorName - In the implementation block
@property (copy,readonly) NSString * custodianName;              //@synthesize custodianName=_custodianName - In the implementation block
-(id)_validateConfiguration;
-(NSString *)authorName;
-(NSString *)custodianName;
-(BOOL)_compressDocumentDataForTransfer:(id*)arg1 ;
-(BOOL)_decompressDocumentDataForDelivery:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 omittedContentFlags:(long long)arg2 ;
-(NSString *)patientName;
-(id)initWithDocumentData:(id)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 omittedContentFlags:(long long)arg2 ;
-(id)_compressedDocumentData;
-(id)_descriptionFieldTitle:(id)arg1 content:(id)arg2 maxSize:(unsigned long long)arg3 ;
-(id)description;
-(NSString *)title;
-(NSData *)documentData;
@end

