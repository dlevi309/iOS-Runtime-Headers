/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMGroupActionChatItem : IMTranscriptChatItem {

	IMHandle* _sender;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) IMHandle * sender;                 //@synthesize sender=_sender - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(long long)actionType;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

