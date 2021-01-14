/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id<SXTextSourceFactory>)textSourceFactory;
-(NSString *)type;
-(id<SXButtonComponentTextProvider>)textProvider;
-(int)role;
-(id)initWithTextProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 ;
@end

