/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)updateWithItem:(id)arg1 ;
-(CSSearchableItem *)item;
-(CSUserAction *)action;
-(void)setAction:(CSUserAction *)arg1 ;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(id)description;
-(NSString *)protectionClass;
-(id)searchableItem;
-(id)initWithAction:(id)arg1 item:(id)arg2 ;
@end

