/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IMItem, NSString;

@interface IMChatItem : NSObject <NSCopying> {

	IMItem* _item;

}

@property (nonatomic,readonly) BOOL canDelete; 
@property (nonatomic,retain,readonly) NSString * balloonBundleID; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_item;
-(NSString *)balloonBundleID;
-(BOOL)canDelete;
-(id)_initWithItem:(id)arg1 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
@end

