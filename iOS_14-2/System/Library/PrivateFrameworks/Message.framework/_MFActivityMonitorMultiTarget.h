/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {

	id _primaryTarget;
	NSMutableSet* _allTargets;

}
-(id)allTargets;
-(BOOL)addActivityTarget:(id)arg1 ;
-(BOOL)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
-(id)displayName;
@end

