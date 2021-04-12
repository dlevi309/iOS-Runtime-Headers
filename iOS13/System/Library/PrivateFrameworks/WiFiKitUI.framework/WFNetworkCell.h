/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

@class NSString, WFHotspotDetails;


@protocol WFNetworkCell <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars; 
@property (assign,nonatomic) BOOL personalHotspot; 
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails; 
@property (assign,nonatomic) BOOL connectionError; 
@required
-(long long)state;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(unsigned long long)bars;
-(void)setState:(long long)arg1;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(void)setSecure:(BOOL)arg1;
-(void)setBars:(unsigned long long)arg1;
-(BOOL)secure;
-(void)setConnectionError:(BOOL)arg1;
-(BOOL)connectionError;
-(void)setPersonalHotspot:(BOOL)arg1;
-(WFHotspotDetails *)hotspotDetails;
-(void)setHotspotDetails:(id)arg1;
-(BOOL)personalHotspot;

@end

