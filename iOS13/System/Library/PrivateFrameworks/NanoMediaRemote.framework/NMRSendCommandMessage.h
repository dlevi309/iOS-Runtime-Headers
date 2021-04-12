/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandMessageProtobuf, NSString, NSDictionary, NSNumber, NSDate;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
-(NSDictionary *)options;
-(NSString *)bundleID;
-(NSNumber *)originIdentifier;
-(unsigned)command;
-(NSDate *)serializationDate;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(id)initWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
@end

