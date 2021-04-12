/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {

	SBIconModel* _iconModel;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;

}
-(id)iconStateDisplayIdentifiers;
-(void)_visibleIdentifiersChanged:(id)arg1 ;
-(id)initWithIconModel:(id)arg1 ;
-(void)dealloc;
@end

