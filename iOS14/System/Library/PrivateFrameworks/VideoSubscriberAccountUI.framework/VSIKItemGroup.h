/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <libobjc.A.dylib/VSJSItemGroupBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol VSIKItemGroupDelegate;
@class NSString, IKAppContext;

@interface VSIKItemGroup : NSObject <VSJSItemGroupBridge, IKDOMFeature> {

	IKAppContext* _appContext;
	NSString* _featureName;
	long long _jsSelectedItem;
	id<VSIKItemGroupDelegate> _delegate;
	long long _selectedItemIndex;

}

@property (assign,nonatomic,__weak) id<VSIKItemGroupDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedItemIndex;                                     //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (assign,setter=setJSSelectedItem:,nonatomic) long long jsSelectedItem;              //@synthesize jsSelectedItem=_jsSelectedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
+(void)registerFeature;
-(id<VSIKItemGroupDelegate>)delegate;
-(void)setSelectedItemIndex:(long long)arg1 ;
-(void)setDelegate:(id<VSIKItemGroupDelegate>)arg1 ;
-(IKAppContext *)appContext;
-(long long)selectedItemIndex;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(long long)jsSelectedItem;
-(void)setJSSelectedItem:(long long)arg1 ;
@end

