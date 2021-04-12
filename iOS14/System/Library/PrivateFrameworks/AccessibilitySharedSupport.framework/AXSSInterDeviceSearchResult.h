/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSString, MCPeerID;

@interface AXSSInterDeviceSearchResult : NSObject {

	NSString* _deviceType;
	MCPeerID* _peerID;

}

@property (nonatomic,retain) MCPeerID * peerID;                //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)searchResultWithPeerID:(id)arg1 deviceType:(id)arg2 ;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(MCPeerID *)peerID;
-(NSString *)name;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPeerID:(id)arg1 deviceType:(id)arg2 ;
@end

