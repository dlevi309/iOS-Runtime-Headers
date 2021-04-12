/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMediaSelectionInternal, AVAsset;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {

	AVMediaSelectionInternal* _mediaSelection;

}

@property (nonatomic,__weak,readonly) AVAsset * asset; 
-(id)_internal;
-(id)initWithAsset:(id)arg1 propertyList:(id)arg2 ;
-(AVAsset *)asset;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_selectedMediaArray;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(id)description;
-(id)_groupDictionaries;
-(id)_dictionaryGroupsWithSelectedOption;
-(id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1 ;
-(id)_initWithAsset:(id)arg1 ;
-(unsigned long long)hash;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2 ;
-(id)_initWithAssetWithoutGroupDictionaries:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

