/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString, NSData;

@interface MRGenericMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSData * data; 
-(NSData *)data;
-(NSString *)key;
-(unsigned long long)type;
-(id)initWithKey:(id)arg1 data:(id)arg2 ;
@end

