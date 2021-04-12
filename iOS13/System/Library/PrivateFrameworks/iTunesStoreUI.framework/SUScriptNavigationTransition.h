/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUNavigationContainerViewController, NSMutableArray, SUScriptNavigationItem;

@interface SUScriptNavigationTransition : SUScriptObject {

	long long _status;
	NSString* _title;
	SUNavigationContainerViewController* _container;
	long long _fromIndex;
	long long _toIndex;
	NSString* _rightBarButton;
	NSMutableArray* _finishBlocks;

}

@property (nonatomic,retain) NSMutableArray * finishBlocks;                           //@synthesize finishBlocks=_finishBlocks - In the implementation block
@property (assign,nonatomic) long long fromIndex;                                     //@synthesize fromIndex=_fromIndex - In the implementation block
@property (nonatomic,retain) NSString * rightBarButton;                               //@synthesize rightBarButton=_rightBarButton - In the implementation block
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) long long toIndex;                                       //@synthesize toIndex=_toIndex - In the implementation block
@property (nonatomic,retain) SUScriptNavigationItem * topNavigationItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(long long)status;
-(id)_className;
-(void)setStatus:(long long)arg1 ;
-(long long)fromIndex;
-(long long)toIndex;
-(void)setFromIndex:(long long)arg1 ;
-(void)setToIndex:(long long)arg1 ;
-(id)attributeKeys;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(id)scriptAttributeKeys;
-(void)finishedLoading;
-(void)setTopNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(SUScriptNavigationItem *)topNavigationItem;
-(id)initWithContainer:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(NSString *)rightBarButton;
-(void)setRightBarButton:(NSString *)arg1 ;
-(NSMutableArray *)finishBlocks;
-(void)setFinishBlocks:(NSMutableArray *)arg1 ;
@end

