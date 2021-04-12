/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <libobjc.A.dylib/SFResourceLoader.h>

@protocol _SiriUICardLoaderDelegate;
@class NSString;

@interface _SiriUICardLoader : NSObject <SFResourceLoader> {

	BOOL _active;
	id<_SiriUICardLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SiriUICardLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id<_SiriUICardLoaderDelegate>)delegate;
-(BOOL)loadCard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<_SiriUICardLoaderDelegate>)arg1 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundation;
@end

