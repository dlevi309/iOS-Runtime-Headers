/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetIconMessage, NSData, NSString, NSNumber, NSDate;

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetIconMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * icon; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
-(NSString *)bundleID;
-(NSData *)icon;
-(NSNumber *)originIdentifier;
-(NSDate *)serializationDate;
-(id)protobufData;
-(NSData *)originalDigest;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
@end

