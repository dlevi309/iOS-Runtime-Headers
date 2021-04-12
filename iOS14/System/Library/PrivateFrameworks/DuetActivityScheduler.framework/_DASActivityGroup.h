/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASActivityGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	unsigned long long _maxConcurrent;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrent;              //@synthesize maxConcurrent=_maxConcurrent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)groupWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2 ;
-(void)setMaxConcurrent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2 ;
-(unsigned long long)maxConcurrent;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

