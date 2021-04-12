/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(int)uniqueIdentifier;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(int)arg1 ;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(NSData *)deviceInfoData;
-(void)setDeviceInfoData:(NSData *)arg1 ;
@end

