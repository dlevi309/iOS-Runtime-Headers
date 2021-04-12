/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canDelete;
-(NSString *)transferGUID;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3 ;
@end

