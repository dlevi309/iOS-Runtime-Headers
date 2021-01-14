/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(id)initWithClientID:(id)arg1 ;
-(NSMutableArray *)activeFocusLayers;
-(void)setCurrentFocusItem:(id<UIFocusItem>)arg1 ;
-(NSMapTable *)activeFocusLayersToItems;
-(id<UIFocusItem>)currentFocusItem;
-(void)setActiveFocusLayers:(NSMutableArray *)arg1 ;
-(void)setActiveFocusLayersToItems:(NSMapTable *)arg1 ;
-(id)description;
@end

