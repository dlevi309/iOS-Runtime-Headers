/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * subject; 
@property (assign,nonatomic) double validFrom; 
@property (assign,nonatomic) double validUntil; 
@property (nonatomic,copy) NSArray * dnsNames; 
@property (nonatomic,copy) NSArray * ipAddresses; 
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(double)validUntil;
-(NSArray *)ipAddresses;
-(void)setValidUntil:(double)arg1 ;
-(void)setValidFrom:(double)arg1 ;
-(double)validFrom;
-(void)setDnsNames:(NSArray *)arg1 ;
-(NSArray *)dnsNames;
-(void)setIpAddresses:(NSArray *)arg1 ;
@end

