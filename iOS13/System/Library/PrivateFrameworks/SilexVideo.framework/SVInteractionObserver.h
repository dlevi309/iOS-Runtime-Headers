/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteractionObserving.h>

@class NSString;

@interface SVInteractionObserver : NSObject <SVInteractionObserving> {

	/*^block*/id _willBlock;
	/*^block*/id _didBlock;

}

@property (nonatomic,readonly) id willBlock;                        //@synthesize willBlock=_willBlock - In the implementation block
@property (nonatomic,readonly) id didBlock;                         //@synthesize didBlock=_didBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWillHandleInteractionBlock:(/*^block*/id)arg1 ;
-(void)willHandleInteractionWithContext:(id)arg1 ;
-(void)didHandleInteractionWithContext:(id)arg1 ;
-(id)willBlock;
-(id)didBlock;
-(id)initWithWillHandleInteractionBlock:(/*^block*/id)arg1 didHandleInteractionBlock:(/*^block*/id)arg2 ;
-(id)initWithDidHandleInteractionBlock:(/*^block*/id)arg1 ;
@end

