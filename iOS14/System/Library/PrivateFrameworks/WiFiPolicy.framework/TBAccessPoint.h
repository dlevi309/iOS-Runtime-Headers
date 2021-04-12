/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSString;


@protocol TBAccessPoint <NSObject,TBScorable>
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (getter=isEdge,nonatomic,readonly) BOOL edge; 
@property (getter=isTCPGood,nonatomic,readonly) BOOL TCPGood; 
@required
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)longitude;
-(BOOL)isEdge;
-(NSString *)BSSID;
-(BOOL)isTCPGood;

@end

