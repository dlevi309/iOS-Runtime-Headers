/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setRecordIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(FCCKPRecordIdentifier *)recordIdentifier;
-(FCCKPRequestedFields *)requestedFields;
-(void)setRequestedFields:(FCCKPRequestedFields *)arg1 ;
-(BOOL)hasRequestedFields;
-(void)setVersionETag:(NSString *)arg1 ;
-(void)setClientVersionETag:(NSString *)arg1 ;
-(BOOL)hasVersionETag;
-(BOOL)hasClientVersionETag;
-(NSString *)versionETag;
-(NSString *)clientVersionETag;
@end

