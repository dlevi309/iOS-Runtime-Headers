/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSProgress;

@interface PLProgressFollower : NSObject {

	NSProgress* _sourceProgress;
	/*^block*/id _progressHandler;
	NSProgress* _outputProgress;

}

@property (retain) NSProgress * outputProgress;              //@synthesize outputProgress=_outputProgress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)outputProgress;
-(id)initWithSourceProgress:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)setOutputProgress:(NSProgress *)arg1 ;
@end

