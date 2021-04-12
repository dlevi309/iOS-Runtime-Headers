/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _methodName;
	NSString* _bagKey;
	NSDictionary* _parameters;
	VSAuditToken* _auditToken;

}

@property (nonatomic,copy) NSString * methodName;                    //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                        //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)init;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(VSAuditToken *)auditToken;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bagKey;
-(NSString *)methodName;
-(void)setMethodName:(NSString *)arg1 ;
@end

