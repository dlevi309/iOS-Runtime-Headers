/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(unsigned long long)size;
-(id)dictionaryRepresentation;
-(unsigned)state;
-(void)setKey:(NSString *)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)accessDate;
-(void)setAccessDate:(double)arg1 ;
@end

