/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate;

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (nonatomic,readonly) NSDate * lastPlayingDate; 
-(unsigned long long)type;
-(NSDate *)lastPlayingDate;
-(id)initWithLastPlayingDate:(id)arg1 ;
@end

