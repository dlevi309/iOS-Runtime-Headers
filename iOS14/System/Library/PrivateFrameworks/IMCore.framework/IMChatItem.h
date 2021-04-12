/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IMItem, NSString;

@interface IMChatItem : NSObject <NSCopying> {

	IMItem* _item;

}

@property (nonatomic,readonly) BOOL canDelete; 
@property (nonatomic,readonly) BOOL canReply; 
@property (nonatomic,retain,readonly) NSString * balloonBundleID; 
-(id)_item;
-(NSString *)balloonBundleID;
-(BOOL)canReply;
-(BOOL)itemIsReply;
-(BOOL)canDelete;
-(BOOL)itemIsReplyContextPreview;
-(BOOL)itemIsThreadOriginator;
-(id)threadGroupIdentifier;
-(id)description;
-(BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id*)arg1 ;
-(BOOL)isReplyContextPreview;
-(id)_parentItem;
-(BOOL)itemIsReplyCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
@end

