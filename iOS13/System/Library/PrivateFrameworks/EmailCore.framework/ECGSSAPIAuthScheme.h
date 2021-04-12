/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <EmailCore/ECAuthScheme.h>

@interface ECGSSAPIAuthScheme : ECAuthScheme
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)gssapiAuthScheme;
-(void)dealloc;
-(id)name;
-(id)humanReadableName;
-(BOOL)requiresPassword;
-(unsigned)applescriptScheme;
-(id)supportedSASLMechanisms;
@end

