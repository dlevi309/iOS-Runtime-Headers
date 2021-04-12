/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(double)executionTime;
-(id)initWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)setExecutionTime:(double)arg1 ;
@end

