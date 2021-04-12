/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRRemoveEndpointsMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * endpointUIDs; 
-(NSArray *)endpointUIDs;
-(id)initWithEndpointUIDs:(id)arg1 ;
-(unsigned long long)type;
@end

