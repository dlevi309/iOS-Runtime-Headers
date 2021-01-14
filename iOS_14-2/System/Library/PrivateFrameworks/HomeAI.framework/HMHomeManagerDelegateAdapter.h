/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@class NSString;

@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate> {

	/*^block*/id _didUpdateHomes;

}

@property (copy) id didUpdateHomes;                                 //@synthesize didUpdateHomes=_didUpdateHomes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDidUpdateHomes:(id)arg1 ;
-(id)didUpdateHomes;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
@end

