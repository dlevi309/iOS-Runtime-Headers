/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionContext.h>
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


@protocol CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener, CNUIUserActionDialRequestOpener, CNUIUserActionRecorder, CNUIUserActionCurator;
@class NSString, BSServiceConnectionEndpoint;

@interface CNUIUserActionContext : NSObject <CNUIUserActionContext> {

	id<CNUIUserActionURLOpener> _urlOpener;
	id<CNUIUserActionUserActivityOpener> _userActivityOpener;
	id<CNUIUserActionDialRequestOpener> _dialRequestOpener;
	id<CNUIUserActionRecorder> _actionRecorder;
	id<CNUIUserActionCurator> _actionCurator;
	NSString* _channelIdentifier;
	BSServiceConnectionEndpoint* _connectionEndpoint;

}

@property (nonatomic,retain) id<CNUIUserActionURLOpener> urlOpener;                                //@synthesize urlOpener=_urlOpener - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionUserActivityOpener> userActivityOpener;              //@synthesize userActivityOpener=_userActivityOpener - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDialRequestOpener> dialRequestOpener;                //@synthesize dialRequestOpener=_dialRequestOpener - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionRecorder> actionRecorder;                            //@synthesize actionRecorder=_actionRecorder - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionCurator> actionCurator;                              //@synthesize actionCurator=_actionCurator - In the implementation block
@property (nonatomic,copy) NSString * channelIdentifier;                                           //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (nonatomic,copy) BSServiceConnectionEndpoint * connectionEndpoint;                       //@synthesize connectionEndpoint=_connectionEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithExtensionContext:(id)arg1 ;
+(id)defaultContext;
+(id)makeDefaultContext;
-(id)init;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(NSString *)channelIdentifier;
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(BSServiceConnectionEndpoint *)connectionEndpoint;
-(void)setConnectionEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(void)setUrlOpener:(id<CNUIUserActionURLOpener>)arg1 ;
-(void)setUserActivityOpener:(id<CNUIUserActionUserActivityOpener>)arg1 ;
-(void)setActionRecorder:(id<CNUIUserActionRecorder>)arg1 ;
-(void)setActionCurator:(id<CNUIUserActionCurator>)arg1 ;
-(void)setDialRequestOpener:(id<CNUIUserActionDialRequestOpener>)arg1 ;
@end

