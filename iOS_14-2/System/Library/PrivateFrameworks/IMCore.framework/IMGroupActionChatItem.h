/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)actionType;
-(IMHandle *)sender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
@end

