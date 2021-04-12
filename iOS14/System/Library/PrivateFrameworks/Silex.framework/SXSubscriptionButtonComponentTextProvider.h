/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTextProvider:(id)arg1 ;
-(id)textForComponent:(id)arg1 ;
-(id<SXSubscriptionButtonTextProviding>)textProvider;
@end

