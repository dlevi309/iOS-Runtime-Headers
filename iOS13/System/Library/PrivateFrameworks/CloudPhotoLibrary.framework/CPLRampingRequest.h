/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)requests;
-(void)clearRequests;
-(void)addRequest:(id)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(unsigned long long)requestsCount;
-(id)requestAtIndex:(unsigned long long)arg1 ;
@end

