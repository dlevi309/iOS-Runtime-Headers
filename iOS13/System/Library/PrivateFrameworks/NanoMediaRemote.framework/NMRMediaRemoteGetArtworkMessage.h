/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteGetArtworkMessage, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteGetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteGetArtworkMessage* _protobuf;

}

@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithOriginIdentifier:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(NSDate *)serializationDate;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithOriginIdentifier:(id)arg1 ;
@end

