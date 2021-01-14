/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXQuickLookRouter.h>

@protocol SXQuickLookRouter <NSObject>
@required
-(void)presentFile:(id)arg1 transitionContext:(id)arg2;

@end


@protocol NFResolver;
@class NSString;

@interface SXQuickLookRouter : NSObject <SXQuickLookRouter> {

	id<NFResolver> _resolver;

}

@property (nonatomic,readonly) id<NFResolver> resolver;              //@synthesize resolver=_resolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFResolver>)resolver;
-(id)initWithResolver:(id)arg1 ;
-(void)presentFile:(id)arg1 transitionContext:(id)arg2 ;
@end

