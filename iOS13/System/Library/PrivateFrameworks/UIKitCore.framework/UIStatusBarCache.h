/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class CPBitmapStore;

@interface UIStatusBarCache : NSObject {

	CPBitmapStore* _store;
	BOOL _writeable;

}

@property (getter=isWriteable,nonatomic,readonly) BOOL writeable;              //@synthesize writeable=_writeable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
-(BOOL)isWriteable;
@end

