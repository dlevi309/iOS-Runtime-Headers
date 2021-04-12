/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface ACProtobufURL : PBCodable <NSCopying> {

	NSString* _value;

}

@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithURL:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSURL *)url;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

