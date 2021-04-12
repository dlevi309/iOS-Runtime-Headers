/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class NSString, BSServiceConnectionEndpoint;


@protocol CNUIUserActionContext <NSObject>
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
@property (nonatomic,copy) NSString * channelIdentifier; 
@property (nonatomic,copy) BSServiceConnectionEndpoint * connectionEndpoint; 
@required
-(NSString *)channelIdentifier;
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(void)setChannelIdentifier:(id)arg1;
-(BSServiceConnectionEndpoint *)connectionEndpoint;
-(void)setConnectionEndpoint:(id)arg1;

@end

