/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) IMHandle * sender;                  //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(IMHandle *)sender;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

