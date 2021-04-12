/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSWorkspaceDelegate;
@class FBSSerialQueue;

@interface FBSWorkspaceInitializationOptions : NSObject {

	BOOL _startsInactive;
	id<FBSWorkspaceDelegate> _delegate;
	FBSSerialQueue* _callOutQueue;

}

@property (assign,setter=_setStartsInactive:,nonatomic) BOOL _startsInactive;              //@synthesize startsInactive=_startsInactive - In the implementation block
@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;                                //@synthesize callOutQueue=_callOutQueue - In the implementation block
+(id)optionsWithDelegate:(id)arg1 ;
-(id)init;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(void)_setStartsInactive:(BOOL)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(BOOL)_startsInactive;
-(id)_initWithDelegate:(id)arg1 ;
@end

