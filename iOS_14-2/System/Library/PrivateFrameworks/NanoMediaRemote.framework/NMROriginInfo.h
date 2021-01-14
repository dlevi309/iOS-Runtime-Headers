/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMROriginProtobuf, NSString, NSData;

@interface NMROriginInfo : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMROriginProtobuf* _protobuf;

}

@property (assign,nonatomic) int uniqueIdentifier; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSData * deviceInfoData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUniqueIdentifier:(int)arg1 ;
-(id)initWithProtobufData:(id)arg1 ;
-(id)init;
-(int)uniqueIdentifier;
-(id)protobufData;
-(NSString *)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)displayName;
-(NSData *)deviceInfoData;
-(void)setDeviceInfoData:(NSData *)arg1 ;
@end

