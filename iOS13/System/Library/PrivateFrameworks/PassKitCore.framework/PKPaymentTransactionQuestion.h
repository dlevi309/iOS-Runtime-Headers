/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding> {

	BOOL _answered;
	BOOL _answeredOnThisDevice;
	unsigned long long _type;
	NSDate* _expirationDate;

}

@property (assign,nonatomic) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL answered;                           //@synthesize answered=_answered - In the implementation block
@property (assign,nonatomic) BOOL answeredOnThisDevice;               //@synthesize answeredOnThisDevice=_answeredOnThisDevice - In the implementation block
@property (nonatomic,readonly) NSArray * allowedAnswers; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)answered;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(BOOL)answeredOnThisDevice;
-(NSArray *)allowedAnswers;
-(void)setAnswered:(BOOL)arg1 ;
-(void)setAnsweredOnThisDevice:(BOOL)arg1 ;
@end

