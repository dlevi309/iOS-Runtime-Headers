/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFTrustObject.h>

@class NSData, NSArray, NSNumber;

@interface NFTrustKeyRequest : NFTrustObject {

	NSData* _subjectIdentifier;
	NSData* _discretionaryData;
	NSArray* _localValidations;
	NSNumber* _counterLimit;

}

@property (nonatomic,retain) NSNumber * counterLimit;                 //@synthesize counterLimit=_counterLimit - In the implementation block
@property (nonatomic,retain) NSData * subjectIdentifier;              //@synthesize subjectIdentifier=_subjectIdentifier - In the implementation block
@property (nonatomic,retain) NSData * discretionaryData;              //@synthesize discretionaryData=_discretionaryData - In the implementation block
@property (nonatomic,retain) NSArray * localValidations;              //@synthesize localValidations=_localValidations - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyRequestWithSubjectIdentifier:(id)arg1 discretionaryData:(id)arg2 localValidations:(id)arg3 counterLimit:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)subjectIdentifier;
-(NSData *)discretionaryData;
-(NSNumber *)counterLimit;
-(NSArray *)localValidations;
-(void)setCounterLimit:(NSNumber *)arg1 ;
-(void)setLocalValidations:(NSArray *)arg1 ;
-(void)setDiscretionaryData:(NSData *)arg1 ;
-(void)setSubjectIdentifier:(NSData *)arg1 ;
@end

