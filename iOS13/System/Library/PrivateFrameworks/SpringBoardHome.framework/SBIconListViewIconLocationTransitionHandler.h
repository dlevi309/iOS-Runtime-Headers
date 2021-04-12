/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconListViewIconLocationTransitioning.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBIconListView;

@interface SBIconListViewIconLocationTransitionHandler : NSObject <SBIconListViewIconLocationTransitioning, BSDescriptionProviding> {

	NSString* _iconLocation;
	NSString* _reason;
	SBIconListView* _iconListView;
	double _progress;

}

@property (nonatomic,copy,readonly) NSString * iconLocation;                      //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                            //@synthesize reason=_reason - In the implementation block
@property (nonatomic,__weak,readonly) SBIconListView * iconListView;              //@synthesize iconListView=_iconListView - In the implementation block
@property (assign,nonatomic) double progress;                                     //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)reason;
-(double)progress;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(SBIconListView *)iconListView;
-(NSString *)iconLocation;
-(id)initWithIconLocation:(id)arg1 reason:(id)arg2 iconListView:(id)arg3 ;
@end

