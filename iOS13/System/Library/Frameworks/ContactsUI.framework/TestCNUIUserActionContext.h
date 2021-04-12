/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUIUserActionContext.h>

@class NSString, BSServiceConnectionEndpoint;

@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext> {

	BOOL _actionExecutionWasAttemted;
	NSString* _channelIdentifier;

}

@property (nonatomic,copy) NSString * channelIdentifier;                                             //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (assign,nonatomic) BOOL actionExecutionWasAttemted;                                        //@synthesize actionExecutionWasAttemted=_actionExecutionWasAttemted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
@property (nonatomic,copy) BSServiceConnectionEndpoint * connectionEndpoint; 
-(id)nilValue;
-(NSString *)channelIdentifier;
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(BOOL)actionExecutionWasAttemted;
-(void)setActionExecutionWasAttemted:(BOOL)arg1 ;
@end

