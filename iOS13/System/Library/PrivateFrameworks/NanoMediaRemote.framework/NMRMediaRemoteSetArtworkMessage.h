/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)originIdentifier;
-(NSDate *)serializationDate;
-(id)protobufData;
-(NSData *)originalDigest;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(NSData *)jpegArtwork;
@end

