/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandResultMessageProtobuf, NSArray, NSNumber, NSDate, NSString;

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandResultMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned errorCode; 
@property (nonatomic,readonly) NSArray * handlerReturnStatuses; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3 ;
-(id)initWithProtobufData:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(unsigned)errorCode;
-(id)protobufData;
-(NSDate *)serializationDate;
-(id)_initWithErrorCode:(unsigned)arg1 handlerReturnStatuses:(id)arg2 originIdentifier:(id)arg3 ;
-(NSArray *)handlerReturnStatuses;
@end

