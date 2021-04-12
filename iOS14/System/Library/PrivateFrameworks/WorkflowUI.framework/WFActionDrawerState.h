/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSIndexPath, NSString, WFActionDrawerResults, WFAction;

@interface WFActionDrawerState : NSObject <NSCopying, NSMutableCopying> {

	BOOL _focusedOnSearchBar;
	long long _activePane;
	WFActionDrawerState* _precedingState;
	NSIndexPath* _listPosition;
	NSString* _searchQuery;
	WFActionDrawerResults* _listResults;
	NSString* _categoryName;
	WFAction* _action;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic) long long activePane;                                             //@synthesize activePane=_activePane - In the implementation block
@property (nonatomic,retain) WFActionDrawerState * precedingState;                             //@synthesize precedingState=_precedingState - In the implementation block
@property (nonatomic,retain) NSIndexPath * listPosition;                                       //@synthesize listPosition=_listPosition - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                                             //@synthesize searchQuery=_searchQuery - In the implementation block
@property (assign,getter=isFocusedOnSearchBar,nonatomic) BOOL focusedOnSearchBar;              //@synthesize focusedOnSearchBar=_focusedOnSearchBar - In the implementation block
@property (nonatomic,retain) WFActionDrawerResults * listResults;                              //@synthesize listResults=_listResults - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                            //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,retain) WFAction * action;                                                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)concatStates:(id)arg1 ;
-(id)init;
-(NSString *)bundleIdentifier;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)searchQuery;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setSearchQuery:(NSString *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActivePane:(long long)arg1 ;
-(long long)activePane;
-(id)copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(id)stateChain;
-(id)stateByAddingState:(id)arg1 ;
-(WFActionDrawerState *)precedingState;
-(void)setPrecedingState:(WFActionDrawerState *)arg1 ;
-(NSIndexPath *)listPosition;
-(void)setListPosition:(NSIndexPath *)arg1 ;
-(BOOL)isFocusedOnSearchBar;
-(void)setFocusedOnSearchBar:(BOOL)arg1 ;
-(WFActionDrawerResults *)listResults;
-(void)setListResults:(WFActionDrawerResults *)arg1 ;
@end

