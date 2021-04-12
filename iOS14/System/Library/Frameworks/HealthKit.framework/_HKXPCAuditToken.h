/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _HKXPCAuditToken : NSObject <NSCopying> {

	SCD_Struct_HK4 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_HK4 auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSString * signingIdentifier; 
+(id)signingIdentifierFromAuditToken:(SCD_Struct_HK4)arg1 ;
+(id)auditTokenForCurrentTask;
-(NSString *)signingIdentifier;
-(int)processIdentifier;
-(id)initWithAuditToken:(SCD_Struct_HK4)arg1 ;
-(SCD_Struct_HK4)auditToken;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

