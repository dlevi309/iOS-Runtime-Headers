/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate, NSString;

@interface _HKCDADocumentExtractedFields : NSObject {

	NSDate* _extractedDate;
	NSString* _extractedTitle;
	NSString* _extractedPatient;
	NSString* _extractedAuthorName;
	NSString* _extractedCustodianName;

}

@property (nonatomic,copy,readonly) NSDate * extractedDate;                         //@synthesize extractedDate=_extractedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedTitle;                      //@synthesize extractedTitle=_extractedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedPatient;                    //@synthesize extractedPatient=_extractedPatient - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedAuthorName;                 //@synthesize extractedAuthorName=_extractedAuthorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedCustodianName;              //@synthesize extractedCustodianName=_extractedCustodianName - In the implementation block
-(NSDate *)extractedDate;
-(NSString *)extractedTitle;
-(NSString *)extractedAuthorName;
-(id)initWithDocumentData:(id)arg1 ;
-(NSString *)extractedPatient;
-(NSString *)extractedCustodianName;
-(void)extractHeaderFieldsFromDocumentData:(id)arg1 ;
-(id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(BOOL)arg3 ;
-(id)_parseCDADate:(id)arg1 ;
-(id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(BOOL)arg4 ;
@end

