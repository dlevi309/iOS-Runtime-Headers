/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem {

	IMHandle* _handle;

}

@property (nonatomic,readonly) IMHandle * handle;              //@synthesize handle=_handle - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)handle;
-(id)_initWithItem:(id)arg1 handle:(id)arg2 ;
@end

