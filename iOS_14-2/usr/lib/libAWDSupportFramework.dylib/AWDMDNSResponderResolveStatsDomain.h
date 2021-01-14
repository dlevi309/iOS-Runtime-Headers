/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDMDNSResponderResolveStatsDomain : PBCodable <NSCopying> {

	NSMutableArray* _hostnames;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * hostnames;              //@synthesize hostnames=_hostnames - In the implementation block
+(Class)hostnameType;
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)hostnames;
-(void)setHostnames:(NSMutableArray *)arg1 ;
-(void)addHostname:(id)arg1 ;
-(unsigned long long)hostnamesCount;
-(void)clearHostnames;
-(id)hostnameAtIndex:(unsigned long long)arg1 ;
@end

