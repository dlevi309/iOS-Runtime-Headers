/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVAssetInspectorLoader.h>

@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {

	int _figError;
	NSDictionary* _figErrorUserInfo;
	BOOL _statusOfValueForKeyReturnsLoaded;

}
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)initForUnitTests;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(Class)_classForTrackInspectors;
-(void)dealloc;
@end

