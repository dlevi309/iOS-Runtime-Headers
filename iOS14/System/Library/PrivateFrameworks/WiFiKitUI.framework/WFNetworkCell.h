/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)secure;
-(void)setPersonalHotspot:(BOOL)arg1;
-(void)setSecure:(BOOL)arg1;
-(BOOL)connectionError;
-(void)setConnectionError:(BOOL)arg1;
-(NSString *)subtitle;
-(void)setTitle:(id)arg1;
-(void)setBars:(unsigned long long)arg1;
-(unsigned long long)bars;
-(void)setState:(long long)arg1;
-(long long)state;
-(void)setSubtitle:(id)arg1;
-(NSString *)title;
-(WFHotspotDetails *)hotspotDetails;
-(void)setHotspotDetails:(id)arg1;
-(BOOL)personalHotspot;

@end

