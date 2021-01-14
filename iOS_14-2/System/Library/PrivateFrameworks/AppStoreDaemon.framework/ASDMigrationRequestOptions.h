/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@interface ASDMigrationRequestOptions : ASDRequestOptions {

	unsigned long long _migrationType;

}

@property (nonatomic,readonly) unsigned long long migrationType;              //@synthesize migrationType=_migrationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMigrationType:(unsigned long long)arg1 ;
-(unsigned long long)migrationType;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

