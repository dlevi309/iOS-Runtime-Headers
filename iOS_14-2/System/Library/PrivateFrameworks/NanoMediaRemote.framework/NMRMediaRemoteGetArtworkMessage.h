/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProtobufData:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(id)protobufData;
-(NSDate *)serializationDate;
-(id)_initWithOriginIdentifier:(id)arg1 ;
@end

