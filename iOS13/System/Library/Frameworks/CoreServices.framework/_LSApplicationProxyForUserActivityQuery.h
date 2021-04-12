/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSBundleQuery.h>

@class NSString;

@interface _LSApplicationProxyForUserActivityQuery : _LSBundleQuery {

	NSString* _domainName;
	NSString* _activityType;

}

@property (nonatomic,copy,readonly) NSString * domainName;                //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityType;              //@synthesize activityType=_activityType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithActivityType:(id)arg1 ;
+(id)queryWithDomainName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(NSString *)domainName;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

