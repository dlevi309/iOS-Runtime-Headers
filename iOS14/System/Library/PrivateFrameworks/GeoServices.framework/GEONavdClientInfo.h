/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEOApplicationAuditToken;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalName;
	NSString* _uniqueClientId;
	GEOApplicationAuditToken* _auditToken;

}

@property (nonatomic,copy) NSString * canonicalName;                             //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSString * uniqueClientId;                            //@synthesize uniqueClientId=_uniqueClientId - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientInfoForNavdPredictions;
-(void)setUniqueClientId:(NSString *)arg1 ;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 auditToken:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)setCanonicalName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isNavdClientInfo;
-(BOOL)isCalendarClientInfo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueClientId;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)canonicalName;
-(BOOL)isEqual:(id)arg1 ;
@end

