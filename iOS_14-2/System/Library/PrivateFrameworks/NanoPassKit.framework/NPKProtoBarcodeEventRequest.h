/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NPKProtoBarcodeEventRequest : PBRequest <NSCopying> {

	NSMutableArray* _associatedApplicationIdentifiers;
	NSData* _requestData;

}

@property (nonatomic,readonly) BOOL hasRequestData; 
@property (nonatomic,retain) NSData * requestData;                                           //@synthesize requestData=_requestData - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedApplicationIdentifiers;              //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
+(Class)associatedApplicationIdentifiersType;
-(id)dictionaryRepresentation;
-(BOOL)hasRequestData;
-(NSData *)requestData;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setAssociatedApplicationIdentifiers:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)associatedApplicationIdentifiers;
-(void)setRequestData:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAssociatedApplicationIdentifiers:(id)arg1 ;
-(unsigned long long)associatedApplicationIdentifiersCount;
-(void)clearAssociatedApplicationIdentifiers;
-(id)associatedApplicationIdentifiersAtIndex:(unsigned long long)arg1 ;
@end

