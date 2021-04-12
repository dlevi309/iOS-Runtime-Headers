/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
*/

#import <libobjc.A.dylib/CNDonationValueVisitor.h>

@class NSMutableArray, NSArray, NSString;

@interface CNDFDonationStringCollector : NSObject <CNDonationValueVisitor> {

	NSMutableArray* _visitedStrings;

}

@property (nonatomic,readonly) NSMutableArray * visitedStrings;              //@synthesize visitedStrings=_visitedStrings - In the implementation block
@property (nonatomic,readonly) NSArray * strings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)strings;
-(id)init;
-(NSString *)description;
-(void)visitDonationValue:(id)arg1 nameComponents:(id)arg2 ;
-(void)visitDonationValue:(id)arg1 emailAddress:(id)arg2 label:(id)arg3 ;
-(void)visitDonationValue:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3 ;
-(void)visitDonationValue:(id)arg1 postalAddress:(id)arg2 style:(long long)arg3 label:(id)arg4 ;
-(void)visitDonationValue:(id)arg1 imageData:(id)arg2 ;
-(void)collectStringsFromDonation:(id)arg1 ;
-(NSMutableArray *)visitedStrings;
-(void)_addNonEmptyString:(id)arg1 ;
@end

