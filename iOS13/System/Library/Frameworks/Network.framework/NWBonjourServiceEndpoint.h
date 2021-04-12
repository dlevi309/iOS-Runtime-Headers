/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * domain; 
+(unsigned)endpointType;
+(id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
@end

