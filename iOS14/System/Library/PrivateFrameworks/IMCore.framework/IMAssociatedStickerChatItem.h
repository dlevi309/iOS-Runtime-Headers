/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem {

	NSString* _transferGUID;

}

@property (nonatomic,copy,readonly) NSString * transferGUID;              //@synthesize transferGUID=_transferGUID - In the implementation block
-(Class)__ck_chatItemClass;
-(BOOL)canDelete;
-(id)description;
-(NSString *)transferGUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3 ;
@end

