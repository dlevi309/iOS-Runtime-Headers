/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>

@class FBSDisplayLayoutPublisher, FBSDisplayLayout, NSString;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving> {

	FBSDisplayLayoutPublisher* _publisher;
	int _displayBacklightToken;

}

@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) long long backlightLevel; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)flush;
-(id)addElement:(id)arg1 ;
-(long long)interfaceOrientation;
-(FBSDisplayLayout *)currentLayout;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)isTransitioning;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)setBacklightLevel:(long long)arg1 ;
-(long long)backlightLevel;
-(id)_addElement:(id)arg1 forKey:(id)arg2 ;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(id)transitionAssertionWithReason:(id)arg1 ;
-(id)_initWithPublisher:(id)arg1 ;
@end

