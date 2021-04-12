/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isWriteable;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
@end

