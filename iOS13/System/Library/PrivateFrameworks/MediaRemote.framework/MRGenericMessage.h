/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString, NSData;

@interface MRGenericMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSData * data; 
-(NSString *)key;
-(unsigned long long)type;
-(NSData *)data;
-(id)initWithKey:(id)arg1 data:(id)arg2 ;
@end

