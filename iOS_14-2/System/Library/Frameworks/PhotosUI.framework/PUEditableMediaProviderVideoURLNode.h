/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUVideoURLNode.h>

@protocol PUEditableAsset;
@class NSURL, PUEditableMediaProvider, NSArray, NSString;

@interface PUEditableMediaProviderVideoURLNode : PXRunNode <PUVideoURLNode> {

	int _requestID;
	NSURL* _videoURL;
	long long _version;
	id<PUEditableAsset> _asset;
	PUEditableMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                     //@synthesize videoURL=_videoURL - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUEditableMediaProvider *)mediaProvider;
-(void)run;
-(id<PUEditableAsset>)asset;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3 ;
-(void)_handleDidLoadVideoURL:(id)arg1 info:(id)arg2 ;
-(NSURL *)videoURL;
-(long long)version;
@end

