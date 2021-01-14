/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)answered;
-(id)description;
-(NSDate *)expirationDate;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(BOOL)answeredOnThisDevice;
-(NSArray *)allowedAnswers;
-(void)setAnswered:(BOOL)arg1 ;
-(void)setAnsweredOnThisDevice:(BOOL)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

