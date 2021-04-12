/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolSecurityConnection, RWIProtocolSecurityCertificate;

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolSecurityConnection * connection; 
@property (nonatomic,retain) RWIProtocolSecurityCertificate * certificate; 
-(void)setCertificate:(RWIProtocolSecurityCertificate *)arg1 ;
-(RWIProtocolSecurityCertificate *)certificate;
-(RWIProtocolSecurityConnection *)connection;
-(void)setConnection:(RWIProtocolSecurityConnection *)arg1 ;
@end

