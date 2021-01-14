/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@class BCSLinkItemIdentifier;

@interface BCSChoppedItemIdentifierInfo : NSObject {

	BCSLinkItemIdentifier* _itemIdentifier;
	long long _chopID;

}

@property (nonatomic,retain) BCSLinkItemIdentifier * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long chopID;                                    //@synthesize chopID=_chopID - In the implementation block
+(id)newWithLinkItemIdentifier:(id)arg1 chopID:(long long)arg2 ;
-(BCSLinkItemIdentifier *)itemIdentifier;
-(void)setItemIdentifier:(BCSLinkItemIdentifier *)arg1 ;
-(long long)chopID;
-(void)setChopID:(long long)arg1 ;
@end

