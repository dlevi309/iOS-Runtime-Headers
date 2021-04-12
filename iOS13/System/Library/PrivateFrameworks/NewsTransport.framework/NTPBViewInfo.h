/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBViewInfo : PBCodable <NSCopying> {

	NSString* _viewId;
	int _viewType;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasViewType; 
@property (assign,nonatomic) int viewType;                   //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) BOOL hasViewId; 
@property (nonatomic,retain) NSString * viewId;              //@synthesize viewId=_viewId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)viewType;
-(NSString *)viewId;
-(void)setViewId:(NSString *)arg1 ;
-(void)setViewType:(int)arg1 ;
-(void)setHasViewType:(BOOL)arg1 ;
-(BOOL)hasViewType;
-(id)viewTypeAsString:(int)arg1 ;
-(int)StringAsViewType:(id)arg1 ;
-(BOOL)hasViewId;
@end

