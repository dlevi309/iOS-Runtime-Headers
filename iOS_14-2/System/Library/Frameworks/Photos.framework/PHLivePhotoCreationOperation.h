/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resultHandler;
-(CGSize)targetSize;
-(long long)contentMode;
-(void)main;
-(NSArray *)resourceURLs;
-(id)_createImageOnlyLivePhotoWithImageURL:(id)arg1 ;
-(id)initWithResourceURLs:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

