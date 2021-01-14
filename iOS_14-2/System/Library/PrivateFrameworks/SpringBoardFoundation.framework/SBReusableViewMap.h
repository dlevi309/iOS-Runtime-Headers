/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBReusableViewMapDelegate;
@class NSMapTable, NSString;

@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {

	NSMapTable* _recycledViewsByClass;
	BOOL _invalidated;
	id<SBReusableViewMapDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBReusableViewMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long recycledViewCount; 
@property (nonatomic,readonly) unsigned long long viewRecyclingCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(id<SBReusableViewMapDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2 ;
-(id)dequeueReusableViewOfClass:(Class)arg1 ;
-(BOOL)isViewRecycled:(id)arg1 ;
-(void)setDelegate:(id<SBReusableViewMapDelegate>)arg1 ;
-(NSString *)description;
-(void)purgeAllViews;
-(id)initWithDelegate:(id)arg1 ;
-(void)recycleView:(id)arg1 ;
-(id)newViewOfClass:(Class)arg1 ;
-(void)purgeViewsForClass:(Class)arg1 ;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)enumerateRecycledViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)viewOfClass:(Class)arg1 ;
-(unsigned long long)recycledViewCount;
-(unsigned long long)viewRecyclingCount;
-(void)dealloc;
@end

