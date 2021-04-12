/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBDiscoverMoreVideosInfo : PBCodable <NSCopying> {

	NSString* _actionURLString;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasActionURLString; 
@property (nonatomic,retain) NSString * actionURLString;              //@synthesize actionURLString=_actionURLString - In the implementation block
-(id)dictionaryRepresentation;
-(void)setActionURLString:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSubtitle;
-(id)description;
-(BOOL)hasActionURLString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)actionURLString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

