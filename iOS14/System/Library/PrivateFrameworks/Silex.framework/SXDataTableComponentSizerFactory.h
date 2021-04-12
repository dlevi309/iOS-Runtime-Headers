/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXDOMObjectProviding, SXTextComponentLayoutHosting, SXDataTableTextSourceFactory, SXDataRecordValueTransformerFactory;
@class NSString;

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXDataTableTextSourceFactory> _textSourceFactory;
	id<SXDataRecordValueTransformerFactory> _recordValueTransformerFactory;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                                         //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;                        //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,readonly) id<SXDataTableTextSourceFactory> textSourceFactory;                                 //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (nonatomic,readonly) id<SXDataRecordValueTransformerFactory> recordValueTransformerFactory;              //@synthesize recordValueTransformerFactory=_recordValueTransformerFactory - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 recordValueTransformerFactory:(id)arg4 ;
-(id<SXDataTableTextSourceFactory>)textSourceFactory;
-(NSString *)type;
-(int)role;
-(id<SXDataRecordValueTransformerFactory>)recordValueTransformerFactory;
@end

