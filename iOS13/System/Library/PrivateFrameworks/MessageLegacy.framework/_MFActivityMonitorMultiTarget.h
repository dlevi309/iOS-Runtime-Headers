/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {

	id _primaryTarget;
	NSMutableSet* _allTargets;

}
-(id)displayName;
-(id)allTargets;
-(BOOL)addActivityTarget:(id)arg1 ;
-(BOOL)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
@end

