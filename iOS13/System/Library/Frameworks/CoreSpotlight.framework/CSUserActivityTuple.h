/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <libobjc.A.dylib/CSIndexQueuableItem.h>

@class CSUserAction, CSSearchableItem, NSString;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem> {

	CSUserAction* _action;
	CSSearchableItem* _item;
	NSString* _protectionClass;

}

@property (retain) CSUserAction * action;                   //@synthesize action=_action - In the implementation block
@property (retain) CSSearchableItem * item;                 //@synthesize item=_item - In the implementation block
@property (retain) NSString * protectionClass;              //@synthesize protectionClass=_protectionClass - In the implementation block
-(CSSearchableItem *)item;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(CSUserAction *)action;
-(void)setAction:(CSUserAction *)arg1 ;
-(NSString *)protectionClass;
-(id)searchableItem;
-(void)setProtectionClass:(NSString *)arg1 ;
-(id)initWithAction:(id)arg1 item:(id)arg2 ;
@end

