/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/SBFActionHandling.h>

@protocol SBFActionProviding, CSEmbeddedContentActionManagerDelegate;
@class NSMutableSet, NSString;

@interface CSEmbeddedContentActionManager : NSObject <SBFActionHandling> {

	id<SBFActionProviding> _contentActionProvider;
	id<CSEmbeddedContentActionManagerDelegate> _delegate;
	NSMutableSet* _activeActions;

}

@property (assign,nonatomic,__weak) id<CSEmbeddedContentActionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeActions;                                            //@synthesize activeActions=_activeActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentActionProvider:(id)arg1 ;
-(id)validActionWithIdentifierIfExists:(id)arg1 ;
-(id<CSEmbeddedContentActionManagerDelegate>)delegate;
-(void)setActiveActions:(NSMutableSet *)arg1 ;
-(void)setDelegate:(id<CSEmbeddedContentActionManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)handlesActionWithClass:(Class)arg1 ;
-(BOOL)handleAction:(id)arg1 forProvider:(id)arg2 ;
-(void)_removeAction:(id)arg1 ;
-(BOOL)_addAction:(id)arg1 ;
-(NSMutableSet *)activeActions;
@end

