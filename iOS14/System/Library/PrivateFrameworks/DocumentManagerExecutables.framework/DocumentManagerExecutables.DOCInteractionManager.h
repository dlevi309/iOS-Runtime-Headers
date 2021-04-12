/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

