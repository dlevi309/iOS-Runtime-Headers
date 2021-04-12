/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProtobufData:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(NSDictionary *)options;
-(id)protobufData;
-(NSDate *)serializationDate;
-(NSString *)bundleID;
-(unsigned)command;
-(id)initWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
@end

