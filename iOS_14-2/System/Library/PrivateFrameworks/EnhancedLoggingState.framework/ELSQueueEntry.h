/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
*/

#import <EnhancedLoggingState/EnhancedLoggingState-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ELSQueueEntry : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	BOOL _retry;
	NSString* _type;
	NSString* _typeName;
	NSDictionary* _parameters;
	double _executeAfterDuration;

}

@property (nonatomic,retain) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * typeName;                      //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double executeAfterDuration;              //@synthesize executeAfterDuration=_executeAfterDuration - In the implementation block
@property (assign,nonatomic) BOOL retry;                               //@synthesize retry=_retry - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)dictionaryRepresentation;
-(id)init;
-(BOOL)retry;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)typeName;
-(id)description;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRetry:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 typeName:(id)arg2 parameters:(id)arg3 executeAfterDuration:(double)arg4 retry:(BOOL)arg5 ;
-(double)executeAfterDuration;
-(void)setExecuteAfterDuration:(double)arg1 ;
@end

