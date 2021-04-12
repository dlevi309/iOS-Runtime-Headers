/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)title;
-(NSData *)documentData;
-(id)_validateConfiguration;
-(BOOL)_compressDocumentDataForTransfer:(id*)arg1 ;
-(BOOL)_decompressDocumentDataForDelivery:(id*)arg1 ;
-(id)initWithDocumentData:(id)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6 ;
-(id)initWithCoder:(id)arg1 omittedContentFlags:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 omittedContentFlags:(long long)arg2 ;
-(NSString *)patientName;
-(NSString *)authorName;
-(NSString *)custodianName;
-(id)_descriptionFieldTitle:(id)arg1 content:(id)arg2 maxSize:(unsigned long long)arg3 ;
-(id)_compressedDocumentData;
@end

