/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSProgress;

@interface PLProgressFollower : NSObject {

	/*^block*/id _progressHandler;
	NSProgress* _sourceProgress;
	NSProgress* _outputProgress;

}

@property (retain) NSProgress * outputProgress;                //@synthesize outputProgress=_outputProgress - In the implementation block
@property (readonly) NSProgress * sourceProgress;              //@synthesize sourceProgress=_sourceProgress - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithSourceProgress:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(NSProgress *)outputProgress;
-(NSProgress *)sourceProgress;
-(void)setOutputProgress:(NSProgress *)arg1 ;
-(void)dealloc;
@end

