/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HDSyncEntityIdentifier : NSObject <NSCopying, NSSecureCoding> {

	long long _entityIdentifier;
	NSString* _schemaIdentifier;

}

@property (nonatomic,readonly) long long entityIdentifier;                    //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * schemaIdentifier;              //@synthesize schemaIdentifier=_schemaIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierWithSchema:(id)arg1 entity:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)entityIdentifier;
-(id)initWithEntityIdentifier:(long long)arg1 schemaIdentifier:(id)arg2 ;
-(id)initWithCodableEntityIdentifier:(id)arg1 ;
-(id)codableEntityIdentifier;
-(NSString *)schemaIdentifier;
@end

