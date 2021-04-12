/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
@property (nonatomic,copy) BSServiceConnectionEndpoint * connectionEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)channelIdentifier;
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(BOOL)actionExecutionWasAttemted;
-(void)setActionExecutionWasAttemted:(BOOL)arg1 ;
-(id)nilValue;
@end

