/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetDiscoveryModeMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned mode; 
@property (nonatomic,readonly) unsigned features; 
-(unsigned)mode;
-(unsigned)features;
-(id)initWithMode:(unsigned)arg1 features:(unsigned)arg2 ;
-(unsigned long long)type;
@end

