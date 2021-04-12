/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWNavigationObserver.h>

@protocol SWNavigationObserver <NSObject>
@required
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

