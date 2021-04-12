/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localProductType;
-(NSString *)localSystemBuild;
-(HDDataOriginProvenance *)dataProvenance;
@end

