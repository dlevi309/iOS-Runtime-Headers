/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IMHandle *)handle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 handle:(id)arg2 ;
@end

