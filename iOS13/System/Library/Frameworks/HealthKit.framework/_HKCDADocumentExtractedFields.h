/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) NSDate * extractedDate;                         //@synthesize extractedDate=_extractedDate - In the implementation block
@property (nonatomic,readonly) NSString * extractedTitle;                      //@synthesize extractedTitle=_extractedTitle - In the implementation block
@property (nonatomic,readonly) NSString * extractedPatient;                    //@synthesize extractedPatient=_extractedPatient - In the implementation block
@property (nonatomic,readonly) NSString * extractedAuthorName;                 //@synthesize extractedAuthorName=_extractedAuthorName - In the implementation block
@property (nonatomic,readonly) NSString * extractedCustodianName;              //@synthesize extractedCustodianName=_extractedCustodianName - In the implementation block
-(id)initWithDocumentData:(id)arg1 ;
-(NSDate *)extractedDate;
-(NSString *)extractedTitle;
-(NSString *)extractedPatient;
-(NSString *)extractedAuthorName;
-(NSString *)extractedCustodianName;
-(void)extractHeaderFieldsFromDocumentData:(id)arg1 ;
-(id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(BOOL)arg3 ;
-(id)_parseCDADate:(id)arg1 ;
-(id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(BOOL)arg4 ;
@end

