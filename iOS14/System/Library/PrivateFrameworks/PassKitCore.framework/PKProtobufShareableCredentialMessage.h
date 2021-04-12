/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying> {

	NSString* _dataString;
	NSString* _messageCaption;
	NSData* _passThumbnailImage;
	NSString* _policyIdentifier;
	NSMutableArray* _shareableCredentials;
	unsigned _version;

}

@property (assign,nonatomic) unsigned version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareableCredentials;              //@synthesize shareableCredentials=_shareableCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageCaption; 
@property (nonatomic,retain) NSString * messageCaption;                          //@synthesize messageCaption=_messageCaption - In the implementation block
@property (nonatomic,readonly) BOOL hasDataString; 
@property (nonatomic,retain) NSString * dataString;                              //@synthesize dataString=_dataString - In the implementation block
@property (nonatomic,readonly) BOOL hasPolicyIdentifier; 
@property (nonatomic,retain) NSString * policyIdentifier;                        //@synthesize policyIdentifier=_policyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPassThumbnailImage; 
@property (nonatomic,retain) NSData * passThumbnailImage;                        //@synthesize passThumbnailImage=_passThumbnailImage - In the implementation block
+(Class)shareableCredentialsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSData *)passThumbnailImage;
-(unsigned long long)hash;
-(NSString *)messageCaption;
-(BOOL)hasMessageCaption;
-(BOOL)readFrom:(id)arg1 ;
-(void)addShareableCredentials:(id)arg1 ;
-(unsigned long long)shareableCredentialsCount;
-(void)clearShareableCredentials;
-(id)shareableCredentialsAtIndex:(unsigned long long)arg1 ;
-(void)setMessageCaption:(NSString *)arg1 ;
-(NSString *)policyIdentifier;
-(void)setPolicyIdentifier:(NSString *)arg1 ;
-(void)setPassThumbnailImage:(NSData *)arg1 ;
-(BOOL)hasPolicyIdentifier;
-(BOOL)hasPassThumbnailImage;
-(void)setVersion:(unsigned)arg1 ;
-(NSMutableArray *)shareableCredentials;
-(void)setShareableCredentials:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)dataString;
-(void)setDataString:(NSString *)arg1 ;
-(BOOL)hasDataString;
-(BOOL)isEqual:(id)arg1 ;
@end

