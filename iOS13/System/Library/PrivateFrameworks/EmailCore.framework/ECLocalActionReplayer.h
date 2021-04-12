/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol ECLocalActionReplayerDelegate;
@class ECLocalMessageAction, NSError, NSString;

@interface ECLocalActionReplayer : NSObject <EFLoggable> {

	id<ECLocalActionReplayerDelegate> _delegate;
	ECLocalMessageAction* _action;
	NSError* _error;

}

@property (assign,nonatomic,__weak) id<ECLocalActionReplayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ECLocalMessageAction * action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(id<ECLocalActionReplayerDelegate>)delegate;
-(void)setDelegate:(id<ECLocalActionReplayerDelegate>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(ECLocalMessageAction *)action;
-(id)initWithAction:(id)arg1 ;
-(void)setAction:(ECLocalMessageAction *)arg1 ;
-(id)replayAction;
-(id)failActionWithError:(id)arg1 ;
@end

