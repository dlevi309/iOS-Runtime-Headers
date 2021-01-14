/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface _SWCTrackingDomainInfo : NSObject <NSSecureCoding> {

	NSString* _domain;
	NSDictionary* _JSONObject;

}

@property (readonly) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (readonly) NSString * ownerName; 
@property (readonly) NSString * ownerDisplayName; 
@property (readonly) unsigned long long source; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)_queue;
+(id)_trackingDomainInfoWithDomain:(id)arg1 JSONObject:(id)arg2 ;
+(id)_trackingDomainInfoWithDomains:(id)arg1 ;
+(id)lastDatabaseUpdate;
+(id)trackingDomainInfoWithDomains:(id)arg1 ;
+(void)_getTrackingDomainInfoWithDomains:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_initWithDomain:(id)arg1 JSONObject:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)domain;
-(NSString *)ownerDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerName;
-(unsigned long long)source;
@end

