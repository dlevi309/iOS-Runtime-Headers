/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCCKPRecordIdentifier, FCCKPRequestedFields;

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {

	NSString* _clientVersionETag;
	FCCKPRecordIdentifier* _recordIdentifier;
	FCCKPRequestedFields* _requestedFields;
	NSString* _versionETag;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) FCCKPRequestedFields * requestedFields;                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionETag; 
@property (nonatomic,retain) NSString * versionETag;                                //@synthesize versionETag=_versionETag - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersionETag; 
@property (nonatomic,retain) NSString * clientVersionETag;                          //@synthesize clientVersionETag=_clientVersionETag - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(FCCKPRecordIdentifier *)recordIdentifier;
-(NSString *)versionETag;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRecordIdentifier;
-(void)setVersionETag:(NSString *)arg1 ;
-(id)description;
-(NSString *)clientVersionETag;
-(BOOL)hasRequestedFields;
-(unsigned long long)hash;
-(BOOL)hasClientVersionETag;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClientVersionETag:(NSString *)arg1 ;
-(BOOL)hasVersionETag;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestedFields:(FCCKPRequestedFields *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCCKPRequestedFields *)requestedFields;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setRecordIdentifier:(FCCKPRecordIdentifier *)arg1 ;
@end

