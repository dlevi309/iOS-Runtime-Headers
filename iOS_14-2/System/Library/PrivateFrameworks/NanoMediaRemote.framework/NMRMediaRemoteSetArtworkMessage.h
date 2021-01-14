/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetArtworkMessage, NSData, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetArtworkMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * jpegArtwork; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(id)initWithProtobufData:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(id)protobufData;
-(NSDate *)serializationDate;
-(NSData *)originalDigest;
-(id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(NSData *)jpegArtwork;
@end

