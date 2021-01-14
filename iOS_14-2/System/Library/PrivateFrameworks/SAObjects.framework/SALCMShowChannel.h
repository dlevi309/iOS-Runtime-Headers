/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALCMTvChannel;

@interface SALCMShowChannel : SABaseClientBoundCommand

@property (nonatomic,retain) SALCMTvChannel * channel; 
+(id)showChannel;
+(id)showChannelWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setChannel:(SALCMTvChannel *)arg1 ;
-(SALCMTvChannel *)channel;
@end

