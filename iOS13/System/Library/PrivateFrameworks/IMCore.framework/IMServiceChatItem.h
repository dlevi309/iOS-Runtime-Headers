/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem {

	IMHandle* _handle;
	IMServiceImpl* _service;

}

@property (nonatomic,readonly) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IMHandle * handle;                    //@synthesize handle=_handle - In the implementation block
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)handle;
-(IMServiceImpl *)service;
-(id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3 ;
@end

