/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * port; 
+(unsigned)endpointType;
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
-(NSString *)port;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)hostname;
@end

