/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSError;

@interface WFResponse : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _type;
	NSError* _error;
	double _executionTime;

}

@property (assign,nonatomic) double executionTime;              //@synthesize executionTime=_executionTime - In the implementation block
@property (readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSError * error;                   //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithIdentifier:(id)arg1 error:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setExecutionTime:(double)arg1 ;
-(double)executionTime;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
@end

