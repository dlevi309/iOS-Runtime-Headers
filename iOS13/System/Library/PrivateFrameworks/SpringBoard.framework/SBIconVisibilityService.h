/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {

	SBIconModel* _iconModel;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;

}
-(void)dealloc;
-(id)iconStateDisplayIdentifiers;
-(id)initWithIconModel:(id)arg1 ;
-(void)_visibleIdentifiersChanged:(id)arg1 ;
@end

