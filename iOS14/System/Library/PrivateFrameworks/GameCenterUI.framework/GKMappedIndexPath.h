/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <Foundation/NSIndexPath.h>

@class NSIndexPath;

@interface GKMappedIndexPath : NSIndexPath {

	id _tag;
	NSIndexPath* _sourceIndexPath;

}

@property (nonatomic,retain) id tag;                                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSIndexPath * sourceIndexPath;              //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
+(id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 fromSourceIndexPath:(id)arg3 withTag:(id)arg4 ;
-(void)setTag:(id)arg1 ;
-(id)tag;
-(id)description;
-(NSIndexPath *)sourceIndexPath;
-(void)setSourceIndexPath:(NSIndexPath *)arg1 ;
-(void)dealloc;
@end

