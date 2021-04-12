/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(id)initWithPeerID:(id)arg1 deviceType:(id)arg2 ;
@end

