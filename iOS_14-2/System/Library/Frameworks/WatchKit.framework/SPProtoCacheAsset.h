/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SPProtoCacheAsset : PBCodable <NSCopying> {

	double _accessDate;
	unsigned long long _size;
	NSString* _key;
	unsigned _state;

}

@property (assign,nonatomic) unsigned state;                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double accessDate;                    //@synthesize accessDate=_accessDate - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)size;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(id)description;
-(NSString *)key;
-(void)setState:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)state;
-(BOOL)readFrom:(id)arg1 ;
-(double)accessDate;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setAccessDate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

