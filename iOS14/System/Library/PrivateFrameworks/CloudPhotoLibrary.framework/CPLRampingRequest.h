/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying> {

	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;              //@synthesize requests=_requests - In the implementation block
+(Class)requestType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)requests;
-(id)description;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)addRequest:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)requestsCount;
-(void)clearRequests;
-(id)requestAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

