/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteGetIconMessage, NSNumber, NSString, NSDate;

@interface NMRMediaRemoteGetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteGetIconMessage* _protobuf;

}

@property (nonatomic,readonly) NSNumber * width; 
@property (nonatomic,readonly) NSNumber * height; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
-(NSNumber *)width;
-(id)initWithProtobufData:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(NSNumber *)height;
-(id)protobufData;
-(NSDate *)serializationDate;
-(NSString *)bundleID;
-(id)_initWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
@end

