/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDProactiveModelFittingModelInfo : PBCodable <NSCopying> {

	NSString* _locale;
	NSString* _name;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;               //@synthesize locale=_locale - In the implementation block
+(id)modelInfoFromSessionDescriptor:(id)arg1 ;
+(id)modelInfoFromPlanId:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(NSString *)locale;
-(BOOL)hasLocale;
-(BOOL)hasName;
-(void)setLocale:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

