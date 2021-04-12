/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITreeDataSourceSnapshotter, NSOrderedSet;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {

	_UITreeDataSourceSnapshotter* _snapshotter;
	NSOrderedSet* _identifiers;

}

@property (nonatomic,readonly) _UITreeDataSourceSnapshotter * snapshotter;              //@synthesize snapshotter=_snapshotter - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * identifiers;                              //@synthesize identifiers=_identifiers - In the implementation block
-(NSOrderedSet *)identifiers;
-(id)init;
-(id)description;
-(_UITreeDataSourceSnapshotter *)snapshotter;
-(id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

