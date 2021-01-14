/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMHandle *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

