/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)options;
+(Class)eventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(BOOL)hasBundleID;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(BOOL)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setContentiAdID:(NSData *)arg1 ;
-(BOOL)hasContentiAdID;
-(NSData *)contentiAdID;
@end

