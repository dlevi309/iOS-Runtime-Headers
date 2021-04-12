/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables
*/


@class FPItem;

@interface DocumentManagerExecutables.DOCInteractionManager : NSObject {

	 lastOpenedItem;
	 lastSelectedItem;

}

@property (retain,nonatomic) FPItem * lastOpenedItem; 
@property (retain,nonatomic) FPItem * lastSelectedItem; 
+(id)sharedManagerFor:(id)arg1 ;
+(void)clearSharedControllerFor:(id)arg1 ;
+(void)setSharedManagerWith:(id)arg1 to:(id)arg2 ;
-(id)init;
-(FPItem *)lastOpenedItem;
-(void)setLastOpenedItem:(FPItem *)arg1 ;
-(FPItem *)lastSelectedItem;
-(void)setLastSelectedItem:(FPItem *)arg1 ;
@end

