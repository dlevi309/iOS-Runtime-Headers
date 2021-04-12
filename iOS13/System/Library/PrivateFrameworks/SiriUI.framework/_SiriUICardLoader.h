/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<_SiriUICardLoaderDelegate>)delegate;
-(void)setDelegate:(id<_SiriUICardLoaderDelegate>)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(BOOL)loadCard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundaton;
@end

