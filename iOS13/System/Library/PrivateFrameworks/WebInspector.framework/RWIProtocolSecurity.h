/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolSecurityConnection, RWIProtocolSecurityCertificate;

@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolSecurityConnection * connection; 
@property (nonatomic,retain) RWIProtocolSecurityCertificate * certificate; 
-(RWIProtocolSecurityConnection *)connection;
-(void)setConnection:(RWIProtocolSecurityConnection *)arg1 ;
-(RWIProtocolSecurityCertificate *)certificate;
-(void)setCertificate:(RWIProtocolSecurityCertificate *)arg1 ;
@end

