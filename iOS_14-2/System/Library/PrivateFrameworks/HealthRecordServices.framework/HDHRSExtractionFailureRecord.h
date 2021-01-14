/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding> {

	long long _failureCode;
	NSString* _propertyName;
	NSString* _resourceKeyPath;

}

@property (nonatomic,readonly) long long failureCode;                                       //@synthesize failureCode=_failureCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyName;                                //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * resourceKeyPath;                             //@synthesize resourceKeyPath=_resourceKeyPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalDisplaySafeDescription; 
+(BOOL)supportsSecureCoding;
+(id)extractionFailureRecordWithCode:(long long)arg1 propertyName:(id)arg2 resourceKeyPath:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyName;
-(NSString *)internalDisplaySafeDescription;
-(long long)failureCode;
-(NSString *)resourceKeyPath;
@end

