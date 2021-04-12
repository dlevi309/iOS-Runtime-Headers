/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SXAction>)action;
-(id)initWithAction:(id)arg1 ;
@end

