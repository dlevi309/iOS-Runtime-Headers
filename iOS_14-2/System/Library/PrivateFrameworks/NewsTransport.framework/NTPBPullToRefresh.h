/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying> {

	NSString* _viewId;
	int _viewType;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasViewType; 
@property (assign,nonatomic) int viewType;                   //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) BOOL hasViewId; 
@property (nonatomic,retain) NSString * viewId;              //@synthesize viewId=_viewId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setViewType:(int)arg1 ;
-(BOOL)hasViewType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasViewId;
-(id)description;
-(NSString *)viewId;
-(void)setHasViewType:(BOOL)arg1 ;
-(int)viewType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setViewId:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)viewTypeAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsViewType:(id)arg1 ;
@end

