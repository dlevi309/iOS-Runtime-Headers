/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRTextInputMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned long long actionType; 
@property (nonatomic,readonly) NSString * text; 
-(unsigned long long)type;
-(NSString *)text;
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 text:(id)arg2 ;
@end

