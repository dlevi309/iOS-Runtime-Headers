/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteractionHandling.h>

@class NSString;

@interface SVInteractionHandler : NSObject <SVInteractionHandling> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) id block;                            //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)handleInteractionWithContext:(id)arg1 ;
@end

