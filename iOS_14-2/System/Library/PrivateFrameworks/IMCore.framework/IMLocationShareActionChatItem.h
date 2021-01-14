/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMLocationShareActionChatItem : IMTranscriptChatItem {

	IMHandle* _sender;
	IMHandle* _otherHandle;

}

@property (nonatomic,readonly) long long actionType; 
@property (nonatomic,readonly) long long direction; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) IMHandle * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
-(Class)__ck_chatItemClass;
-(long long)direction;
-(long long)actionType;
-(IMHandle *)sender;
-(IMHandle *)otherHandle;
-(BOOL)isFromMe;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3 ;
@end

