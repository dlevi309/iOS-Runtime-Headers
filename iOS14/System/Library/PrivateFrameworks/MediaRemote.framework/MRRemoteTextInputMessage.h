/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSData * data; 
-(id)initWithVersion:(unsigned long long)arg1 data:(id)arg2 ;
-(NSData *)data;
-(unsigned long long)type;
-(unsigned long long)version;
@end

