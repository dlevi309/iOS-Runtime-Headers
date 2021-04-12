/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPStreamingAssetSaveAssetRequest : PBRequest <NSCopying> {

	long long _requestedSize;
	long long _uploadedSize;
	NSString* _uploadReceipt;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasRequestedSize; 
@property (assign,nonatomic) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign,nonatomic) BOOL hasUploadedSize; 
@property (assign,nonatomic) long long uploadedSize;                //@synthesize uploadedSize=_uploadedSize - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadReceipt; 
@property (nonatomic,retain) NSString * uploadReceipt;              //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(long long)requestedSize;
-(void)setRequestedSize:(long long)arg1 ;
-(void)setHasRequestedSize:(BOOL)arg1 ;
-(BOOL)hasRequestedSize;
-(void)setUploadedSize:(long long)arg1 ;
-(void)setHasUploadedSize:(BOOL)arg1 ;
-(BOOL)hasUploadedSize;
-(BOOL)hasUploadReceipt;
-(long long)uploadedSize;
@end

