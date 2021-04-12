/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDataRecordValueTransformer.h>

@protocol SXDOMObjectProviding;
@class NSString;

@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer> {

	id<SXDOMObjectProviding> _DOMObjectProvider;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDOMObjectProvider:(id)arg1 ;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)transformValueForRecord:(id)arg1 descriptor:(id)arg2 ;
@end

