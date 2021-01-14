/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_startsInactive;
-(FBSSerialQueue *)callOutQueue;
-(id)init;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(void)_setStartsInactive:(BOOL)arg1 ;
-(id)_initWithDelegate:(id)arg1 ;
@end

