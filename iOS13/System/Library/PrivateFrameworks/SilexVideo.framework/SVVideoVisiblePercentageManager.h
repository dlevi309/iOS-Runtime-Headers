/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoVisiblePercentageManager.h>

@protocol SVVideoVisiblePercentageManager <NSObject>
@required
-(id)visiblePercentageProviderForVideo:(id)arg1;
-(id)visiblePercentageReporterForVideo:(id)arg1;

@end


@protocol SVVideoVisiblePercentageProviderFactory;
@class SVWeakObjectCache, NSString;

@interface SVVideoVisiblePercentageManager : NSObject <SVVideoVisiblePercentageManager> {

	id<SVVideoVisiblePercentageProviderFactory> _visiblePercentageProviderFactory;
	SVWeakObjectCache* _visiblePercentageProviders;

}

@property (nonatomic,readonly) id<SVVideoVisiblePercentageProviderFactory> visiblePercentageProviderFactory;              //@synthesize visiblePercentageProviderFactory=_visiblePercentageProviderFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * visiblePercentageProviders;                                            //@synthesize visiblePercentageProviders=_visiblePercentageProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_visiblePercentageProviderForVideo:(id)arg1 ;
-(SVWeakObjectCache *)visiblePercentageProviders;
-(id<SVVideoVisiblePercentageProviderFactory>)visiblePercentageProviderFactory;
-(id)visiblePercentageProviderForVideo:(id)arg1 ;
-(id)visiblePercentageReporterForVideo:(id)arg1 ;
-(id)initWithVisiblePercentageProviderFactory:(id)arg1 ;
@end

