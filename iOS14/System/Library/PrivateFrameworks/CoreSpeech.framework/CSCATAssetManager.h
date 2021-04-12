/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSCATAssetManagerDelegate;
@class NSObject;

@interface CSCATAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSCATAssetManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSCATAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)getCATXPCConnection;
-(id)init;
-(id<CSCATAssetManagerDelegate>)delegate;
-(void)setDelegate:(id<CSCATAssetManagerDelegate>)arg1 ;
-(void)fetchRemoteCATAssetForResource:(id)arg1 withNameOfFile:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadForManifest:(id)arg1 withAssetName:(id)arg2 ;
@end

