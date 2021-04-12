/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSData * data; 
-(unsigned long long)type;
-(NSData *)data;
-(unsigned long long)version;
-(id)initWithVersion:(unsigned long long)arg1 data:(id)arg2 ;
@end

