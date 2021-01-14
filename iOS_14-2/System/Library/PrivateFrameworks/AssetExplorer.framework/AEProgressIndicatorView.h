/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotoLibrary/PLRoundProgressView.h>

@class NSProgress;

@interface AEProgressIndicatorView : PLRoundProgressView {

	NSProgress* __progress;

}

@property (nonatomic,readonly) NSProgress * _progress;              //@synthesize _progress=__progress - In the implementation block
-(NSProgress *)_progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 progress:(id)arg2 ;
@end

