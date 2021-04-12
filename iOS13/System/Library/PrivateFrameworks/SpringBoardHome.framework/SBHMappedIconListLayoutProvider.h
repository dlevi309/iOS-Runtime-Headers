/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconListLayoutProvider.h>

@protocol SBIconListLayoutProvider;
@class NSMutableDictionary;

@interface SBHMappedIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {

	NSMutableDictionary* _mappedIconLocations;
	id<SBIconListLayoutProvider> _targetListLayoutProvider;

}

@property (nonatomic,readonly) id<SBIconListLayoutProvider> targetListLayoutProvider;              //@synthesize targetListLayoutProvider=_targetListLayoutProvider - In the implementation block
-(id)layoutForIconLocation:(id)arg1 ;
-(id<SBIconListLayoutProvider>)targetListLayoutProvider;
-(id)initWithTargetListLayoutProvider:(id)arg1 ;
-(void)mapIconLocation:(id)arg1 toIconLocation:(id)arg2 ;
@end

