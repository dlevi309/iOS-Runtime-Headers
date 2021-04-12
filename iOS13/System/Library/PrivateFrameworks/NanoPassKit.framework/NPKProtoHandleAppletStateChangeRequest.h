/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)passID;
-(void)setPassID:(NSString *)arg1 ;
-(BOOL)hasPassID;
-(void)setPassAppletState:(NSData *)arg1 ;
-(BOOL)hasPassAppletState;
-(NSData *)passAppletState;
@end

