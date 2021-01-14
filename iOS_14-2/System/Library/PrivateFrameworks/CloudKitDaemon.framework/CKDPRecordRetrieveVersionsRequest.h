/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, NSString, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSString* _minimumVersionEtag;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRequestedFields* _requestedFields;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasMinimumVersionEtag; 
@property (nonatomic,retain) NSString * minimumVersionEtag;                        //@synthesize minimumVersionEtag=_minimumVersionEtag - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;              //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(CKDPRecordIdentifier *)recordIdentifier;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRecordIdentifier;
-(id)description;
-(BOOL)hasRequestedFields;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRequestedFields *)requestedFields;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasAssetsToDownload;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setMinimumVersionEtag:(NSString *)arg1 ;
-(BOOL)hasMinimumVersionEtag;
-(NSString *)minimumVersionEtag;
@end

