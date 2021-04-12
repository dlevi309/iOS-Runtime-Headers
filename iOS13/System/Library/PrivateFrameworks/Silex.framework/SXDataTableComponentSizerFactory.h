/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
-(NSString *)type;
-(int)role;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 recordValueTransformerFactory:(id)arg4 ;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXDataTableTextSourceFactory>)textSourceFactory;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id<SXDataRecordValueTransformerFactory>)recordValueTransformerFactory;
@end

