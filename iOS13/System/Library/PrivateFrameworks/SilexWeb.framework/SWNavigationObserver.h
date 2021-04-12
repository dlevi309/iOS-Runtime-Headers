/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWNavigationObserver.h>

@protocol SWNavigationObserver <NSObject>
@required
-(void)handledNavigationWithURL:(id)arg1;
-(void)handledNavigationWithURL:(id)arg1;

@end


@class NSString;

@interface SWNavigationObserver : NSObject <SWNavigationObserver> {

	/*^block*/id _block;

}

@property (nonatomic,readonly) id block;                            //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)handledNavigationWithURL:(id)arg1 ;
@end

