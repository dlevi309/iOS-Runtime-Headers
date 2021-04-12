/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)didEndDisplaying;
-(id)initWithIndexPath:(id)arg1 didEndDisplaying:(BOOL)arg2 ;
@end

