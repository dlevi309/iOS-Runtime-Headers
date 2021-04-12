/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSIndexPath;

@interface _UITableViewCellReuseParameters : NSObject {

	BOOL _didEndDisplaying;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) BOOL didEndDisplaying;                //@synthesize didEndDisplaying=_didEndDisplaying - In the implementation block
-(NSIndexPath *)indexPath;
-(id)initWithIndexPath:(id)arg1 didEndDisplaying:(BOOL)arg2 ;
-(BOOL)didEndDisplaying;
@end

