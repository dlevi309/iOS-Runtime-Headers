/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <libobjc.A.dylib/VSJSMessagePortDelegate.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol VSMessagePortFeatureDelegate;
@class NSString, IKAppContext;

@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate, IKDOMFeature> {

	NSString* _featureName;
	IKAppContext* _appContext;
	id<VSMessagePortFeatureDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSMessagePortFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                 //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                            //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<VSMessagePortFeatureDelegate>)delegate;
-(void)setDelegate:(id<VSMessagePortFeatureDelegate>)arg1 ;
-(IKAppContext *)appContext;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)messagePort:(id)arg1 didReceiveMessage:(id)arg2 ;
@end

