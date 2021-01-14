/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CHTransaction : NSObject <NSSecureCoding> {

	unsigned long long _transactionType;
	NSData* _record;

}

@property (nonatomic,readonly) unsigned long long transactionType;              //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,readonly) NSData * record;                                 //@synthesize record=_record - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)toString:(unsigned long long)arg1 ;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
-(NSData *)record;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2 ;
-(BOOL)isEqualToTransaction:(id)arg1 ;
-(id)initWithString:(id)arg1 andRecord:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transactionType;
-(BOOL)isEqual:(id)arg1 ;
@end

