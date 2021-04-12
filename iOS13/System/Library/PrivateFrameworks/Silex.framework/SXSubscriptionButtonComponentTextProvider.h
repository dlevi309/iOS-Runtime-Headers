/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXButtonComponentTextProvider.h>

@protocol SXSubscriptionButtonTextProviding;
@class NSString;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider> {

	id<SXSubscriptionButtonTextProviding> _textProvider;

}

@property (nonatomic,readonly) id<SXSubscriptionButtonTextProviding> textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)textForComponent:(id)arg1 ;
-(id<SXSubscriptionButtonTextProviding>)textProvider;
-(id)initWithTextProvider:(id)arg1 ;
@end

