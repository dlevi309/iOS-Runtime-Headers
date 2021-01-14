/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTodayModuleContentRequest : PBRequest <NSCopying> {

	int _moduleDescriptorType;
	NSString* _name;
	NSString* _nameColorDark;
	NSString* _nameColorLight;
	NSString* _tagID;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasModuleDescriptorType; 
@property (assign,nonatomic) int moduleDescriptorType;                  //@synthesize moduleDescriptorType=_moduleDescriptorType - In the implementation block
@property (nonatomic,readonly) BOOL hasTagID; 
@property (nonatomic,retain) NSString * tagID;                          //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasNameColorLight; 
@property (nonatomic,retain) NSString * nameColorLight;                 //@synthesize nameColorLight=_nameColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasNameColorDark; 
@property (nonatomic,retain) NSString * nameColorDark;                  //@synthesize nameColorDark=_nameColorDark - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)tagID;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTagID;
-(NSString *)name;
-(id)description;
-(BOOL)hasNameColorLight;
-(BOOL)hasNameColorDark;
-(NSString *)nameColorLight;
-(NSString *)nameColorDark;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNameColorLight:(NSString *)arg1 ;
-(void)setNameColorDark:(NSString *)arg1 ;
-(void)setModuleDescriptorType:(int)arg1 ;
-(void)setHasModuleDescriptorType:(BOOL)arg1 ;
-(BOOL)hasModuleDescriptorType;
-(int)moduleDescriptorType;
-(void)setTagID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

