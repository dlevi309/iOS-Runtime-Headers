/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)hostname;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

