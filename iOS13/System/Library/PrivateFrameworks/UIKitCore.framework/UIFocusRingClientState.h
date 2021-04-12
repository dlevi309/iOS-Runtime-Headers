/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIFocusItem;
@class NSMutableArray, NSMapTable, NSString;

@interface UIFocusRingClientState : NSObject {

	id<UIFocusItem> _currentFocusItem;
	NSMutableArray* _activeFocusLayers;
	NSMapTable* _activeFocusLayersToItems;
	NSString* _clientID;

}

@property (assign,nonatomic,__weak) id<UIFocusItem> currentFocusItem;              //@synthesize currentFocusItem=_currentFocusItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeFocusLayers;                   //@synthesize activeFocusLayers=_activeFocusLayers - In the implementation block
@property (nonatomic,retain) NSMapTable * activeFocusLayersToItems;                //@synthesize activeFocusLayersToItems=_activeFocusLayersToItems - In the implementation block
@property (nonatomic,retain) NSString * clientID;                                  //@synthesize clientID=_clientID - In the implementation block
-(void)setClientID:(NSString *)arg1 ;
-(id)initWithClientID:(id)arg1 ;
-(id<UIFocusItem>)currentFocusItem;
-(void)setCurrentFocusItem:(id<UIFocusItem>)arg1 ;
-(NSMutableArray *)activeFocusLayers;
-(void)setActiveFocusLayers:(NSMutableArray *)arg1 ;
-(NSMapTable *)activeFocusLayersToItems;
-(void)setActiveFocusLayersToItems:(NSMapTable *)arg1 ;
-(NSString *)clientID;
@end

