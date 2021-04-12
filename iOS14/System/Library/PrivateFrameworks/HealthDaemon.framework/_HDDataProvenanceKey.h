/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <NSCopying> {

	unsigned long long _hash;
	HDDataOriginProvenance* _dataProvenance;
	NSString* _localProductType;
	NSString* _localSystemBuild;

}

@property (nonatomic,copy,readonly) HDDataOriginProvenance * dataProvenance;              //@synthesize dataProvenance=_dataProvenance - In the implementation block
@property (nonatomic,copy,readonly) NSString * localProductType;                          //@synthesize localProductType=_localProductType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localSystemBuild;                          //@synthesize localSystemBuild=_localSystemBuild - In the implementation block
+(id)provenanceKeyForProvenance:(id)arg1 localProductType:(id)arg2 localSystemBuild:(id)arg3 ;
-(NSString *)localProductType;
-(id)description;
-(NSString *)localSystemBuild;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HDDataOriginProvenance *)dataProvenance;
@end

