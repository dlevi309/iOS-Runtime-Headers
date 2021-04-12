/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)addManualEntryFields:(id)arg1 ;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(unsigned long long)manualEntryFieldsCount;
-(void)clearManualEntryFields;
-(id)manualEntryFieldsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)manualEntryFields;
-(void)setManualEntryFields:(NSMutableArray *)arg1 ;
@end

