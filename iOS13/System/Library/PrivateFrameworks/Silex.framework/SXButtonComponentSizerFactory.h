/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXButtonComponentTextProvider, SXTextComponentLayoutHosting, SXTextSourceFactory;
@class NSString;

@interface SXButtonComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXButtonComponentTextProvider> _textProvider;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXTextSourceFactory> _textSourceFactory;

}

@property (nonatomic,readonly) id<SXButtonComponentTextProvider> textProvider;                           //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,readonly) id<SXTextSourceFactory> textSourceFactory;                                //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
-(NSString *)type;
-(int)role;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id<SXTextSourceFactory>)textSourceFactory;
-(id)initWithTextProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 ;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id<SXButtonComponentTextProvider>)textProvider;
@end

