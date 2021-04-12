/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolSecurityConnection : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * protocol; 
@property (nonatomic,copy) NSString * cipher; 
-(NSString *)protocol;
-(void)setProtocol:(NSString *)arg1 ;
-(NSString *)cipher;
-(void)setCipher:(NSString *)arg1 ;
@end

