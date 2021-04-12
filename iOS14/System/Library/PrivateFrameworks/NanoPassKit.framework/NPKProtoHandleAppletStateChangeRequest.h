/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NPKProtoHandleAppletStateChangeRequest : PBRequest <NSCopying> {

	NSData* _passAppletState;
	NSString* _passID;

}

@property (nonatomic,readonly) BOOL hasPassID; 
@property (nonatomic,retain) NSString * passID;                      //@synthesize passID=_passID - In the implementation block
@property (nonatomic,readonly) BOOL hasPassAppletState; 
@property (nonatomic,retain) NSData * passAppletState;               //@synthesize passAppletState=_passAppletState - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)passID;
-(BOOL)hasPassID;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPassAppletState:(NSData *)arg1 ;
-(BOOL)hasPassAppletState;
-(NSData *)passAppletState;
@end

