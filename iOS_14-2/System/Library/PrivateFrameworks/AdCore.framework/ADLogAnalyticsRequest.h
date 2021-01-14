/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface ADLogAnalyticsRequest : PBRequest <NSCopying> {

	NSString* _bundleID;
	NSData* _contentiAdID;
	NSData* _dPID;
	NSMutableArray* _events;
	NSData* _iAdID;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                       //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentiAdID; 
@property (nonatomic,retain) NSData * contentiAdID;                //@synthesize contentiAdID=_contentiAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                        //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(Class)eventsType;
+(id)options;
-(id)dictionaryRepresentation;
-(void)addEvents:(id)arg1 ;
-(BOOL)hasBundleID;
-(NSData *)dPID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSData *)iAdID;
-(void)mergeFrom:(id)arg1 ;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)hasDPID;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(unsigned long long)eventsCount;
-(void)writeTo:(id)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setContentiAdID:(NSData *)arg1 ;
-(BOOL)hasContentiAdID;
-(NSData *)contentiAdID;
@end

