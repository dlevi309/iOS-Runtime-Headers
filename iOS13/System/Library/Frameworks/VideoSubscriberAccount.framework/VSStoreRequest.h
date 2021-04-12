/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VSAuditToken *)auditToken;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSString *)bagKey;
-(void)setBagKey:(NSString *)arg1 ;
-(void)setMethodName:(NSString *)arg1 ;
-(NSString *)methodName;
@end

