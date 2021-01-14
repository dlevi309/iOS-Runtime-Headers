/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRTextInputMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long actionType; 
@property (nonatomic,readonly) NSString * text; 
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 text:(id)arg2 ;
-(NSString *)text;
-(unsigned long long)type;
@end

