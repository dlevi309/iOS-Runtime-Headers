/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIconViewSnapshotProviding.h>

@class UIView, NSString;

@interface SBIconViewSnapshotProvider : NSObject <SBIconViewSnapshotProviding> {

	/*^block*/id _invalidationBlock;
	UIView* _snapshotView;

}

@property (nonatomic,readonly) UIView * snapshotView;               //@synthesize snapshotView=_snapshotView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)snapshotView;
-(void)invalidate;
-(id)initWithSnapshotView:(id)arg1 invalidation:(/*^block*/id)arg2 ;
@end

