/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXButtonComponentActionProvider.h>

@protocol SXButtonComponentActionProvider <NSObject>
@required
-(id)action;

@end


@protocol SXAction;
@class NSString;

@interface SXButtonComponentActionProvider : NSObject <SXButtonComponentActionProvider> {

	id<SXAction> _action;

}

@property (nonatomic,readonly) id<SXAction> action;                 //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAction:(id)arg1 ;
-(id<SXAction>)action;
@end

