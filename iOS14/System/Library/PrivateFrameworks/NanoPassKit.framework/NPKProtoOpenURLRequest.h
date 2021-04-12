/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoOpenURLRequest : PBRequest <NSCopying> {

	NSString* _urlString;

}

@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)urlString;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasUrlString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

