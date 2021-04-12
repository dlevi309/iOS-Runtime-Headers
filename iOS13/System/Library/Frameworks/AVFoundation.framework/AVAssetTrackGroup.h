/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject <NSCopying> {

	AVAssetTrackGroupInternal* _assetTrackGroup;

}

@property (nonatomic,readonly) NSArray * trackIDs; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAsset:(id)arg1 trackIDs:(id)arg2 ;
-(NSArray *)trackIDs;
-(id)_assetComparisonToken;
@end

