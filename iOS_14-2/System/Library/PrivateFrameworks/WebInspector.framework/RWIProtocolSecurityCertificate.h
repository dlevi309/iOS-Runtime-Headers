/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)validUntil;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)ipAddresses;
-(void)setValidUntil:(double)arg1 ;
-(void)setValidFrom:(double)arg1 ;
-(double)validFrom;
-(void)setDnsNames:(NSArray *)arg1 ;
-(NSArray *)dnsNames;
-(void)setIpAddresses:(NSArray *)arg1 ;
@end

