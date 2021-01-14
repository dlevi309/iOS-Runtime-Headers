/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMAssociatedMessageChatItem.h>
#import <IMCore/IMVisibleAssociatedMessageHost.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessageEditChatItem : IMAssociatedMessageChatItem <IMVisibleAssociatedMessageHost> {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,retain,readonly) NSAttributedString * editedBody; 
@property (setter=_setVisibleAssociatedMessageChatItems:,nonatomic,retain) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)visibleAssociatedMessageChatItems;
-(void)_setVisibleAssociatedMessageChatItems:(id)arg1 ;
-(NSAttributedString *)editedBody;
@end

