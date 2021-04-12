/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleID;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)originIdentifier;
-(NSDate *)serializationDate;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
@end

