/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotoLibrary/PLRoundProgressView.h>

@class NSProgress;

@interface AEProgressIndicatorView : PLRoundProgressView {

	NSProgress* __progress;

}

@property (nonatomic,readonly) NSProgress * _progress;              //@synthesize _progress=__progress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)_progress;
-(id)initWithFrame:(CGRect)arg1 progress:(id)arg2 ;
@end

