/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionLayoutUpdateContainerOffsetResult.h>
@class NSSet;


@protocol _UICollectionLayoutUpdateContainerOffsetResult <NSObject>
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@required
-(NSSet *)invalidatedAuxillaryKinds;
-(id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;

@end


@class NSSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject <_UICollectionLayoutUpdateContainerOffsetResult> {

	NSMutableDictionary* _invalidatedSupplementaryIndexesDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
-(id)init;
-(NSSet *)invalidatedAuxillaryKinds;
-(id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1 ;
-(void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2 ;
@end

