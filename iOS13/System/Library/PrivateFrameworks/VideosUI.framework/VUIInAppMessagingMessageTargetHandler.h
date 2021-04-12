/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/IAMMessageTarget.h>

@class NSString;

@interface VUIInAppMessagingMessageTargetHandler : NSObject <IAMMessageTarget> {

	NSString* _targetIdentifier;

}

@property (nonatomic,readonly) NSString * targetIdentifier;              //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)targetIdentifier;
-(id)initWithTargetIdentifier:(id)arg1 ;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3 ;
@end

