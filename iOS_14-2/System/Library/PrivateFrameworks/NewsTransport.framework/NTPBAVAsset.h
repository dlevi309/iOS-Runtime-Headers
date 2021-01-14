/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString, NSURL;

@interface NTPBAVAsset : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	unsigned long long _size;
	NSData* _bookmark;
	NSMutableArray* _contentKeyIdentifiers;
	NSString* _identifier;
	NSString* _remoteURL;
	SCD_Struct_NT3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * resolvedCacheURL; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteURL; 
@property (nonatomic,retain) NSString * remoteURL;                                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBookmark; 
@property (nonatomic,retain) NSData * bookmark;                                   //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned long long size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentKeyIdentifiers;              //@synthesize contentKeyIdentifiers=_contentKeyIdentifiers - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)contentKeyIdentifiersType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(NSURL *)resolvedCacheURL;
-(id)dictionaryRepresentation;
-(void)setBookmark:(NSData *)arg1 ;
-(NSData *)bookmark;
-(NSString *)remoteURL;
-(BOOL)hasIdentifier;
-(unsigned long long)size;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(BOOL)hasSize;
-(NSString *)description;
-(void)addContentKeyIdentifiers:(id)arg1 ;
-(BOOL)hasRemoteURL;
-(BOOL)hasBookmark;
-(void)clearContentKeyIdentifiers;
-(unsigned long long)contentKeyIdentifiersCount;
-(id)contentKeyIdentifiersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRemoteURL:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasSize:(BOOL)arg1 ;
-(NSMutableArray *)contentKeyIdentifiers;
-(void)setContentKeyIdentifiers:(NSMutableArray *)arg1 ;
@end

