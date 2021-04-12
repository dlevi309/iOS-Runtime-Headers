/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flush;
-(void)setBacklightLevel:(long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)addElement:(id)arg1 ;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(id)init;
-(long long)backlightLevel;
-(FBSDisplayLayout *)currentLayout;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)interfaceOrientation;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isTransitioning;
-(id)_initWithPublisher:(id)arg1 ;
-(id)_addElement:(id)arg1 forKey:(id)arg2 ;
-(id)transitionAssertionWithReason:(id)arg1 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
@end

