/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest <NSCopying> {

	NSMutableArray* _manualEntryFields;
	NPKProtoStandaloneRequestHeader* _requestHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * manualEntryFields;                           //@synthesize manualEntryFields=_manualEntryFields - In the implementation block
+(Class)manualEntryFieldsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)addManualEntryFields:(id)arg1 ;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(unsigned long long)manualEntryFieldsCount;
-(void)clearManualEntryFields;
-(id)manualEntryFieldsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)manualEntryFields;
-(void)setManualEntryFields:(NSMutableArray *)arg1 ;
@end

