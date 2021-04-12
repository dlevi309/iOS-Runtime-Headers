/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRCloudAvailabilityProtobuf, NSString;

@interface NMRCloudAvailabilityMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRCloudAvailabilityProtobuf* _protobuf;

}

@property (assign,nonatomic) BOOL hasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) BOOL canShowCloudMusic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudMusic;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(void)setHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
@end

