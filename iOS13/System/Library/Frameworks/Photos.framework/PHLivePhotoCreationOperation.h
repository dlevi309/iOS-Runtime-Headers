/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Foundation/NSOperation.h>

@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation {

	long long _contentMode;
	NSArray* _resourceURLs;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                        //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                    //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resourceURLs;              //@synthesize resourceURLs=_resourceURLs - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                    //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(long long)contentMode;
-(CGSize)targetSize;
-(id)initWithResourceURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)_createImageOnlyLivePhotoWithImageURL:(id)arg1 ;
-(NSArray *)resourceURLs;
-(id)resultHandler;
@end

