/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionMarkedAsWatched : VUIAction {

	NSString* _itemID;
	NSString* _itemType;
	NSString* _channelID;

}

@property (nonatomic,retain) NSString * itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * itemType;               //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
-(void)setChannelID:(NSString *)arg1 ;
-(void)setItemID:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)channelID;
-(NSString *)itemID;
-(NSString *)itemType;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

