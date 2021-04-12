/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMediaSelectionInternal, AVAsset;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {

	AVMediaSelectionInternal* _mediaSelection;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)propertyList;
-(id)_internal;
-(AVAsset *)asset;
-(id)initWithAsset:(id)arg1 propertyList:(id)arg2 ;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2 ;
-(id)_initWithAssetWithoutGroupDictionaries:(id)arg1 ;
-(id)_selectedMediaArray;
-(id)_groupDictionaries;
-(id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1 ;
@end

