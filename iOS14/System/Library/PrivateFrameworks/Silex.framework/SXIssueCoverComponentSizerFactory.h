/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXIssueCoverLayoutAttributesFactory;
@class NSString;

@interface SXIssueCoverComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;              //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(NSString *)type;
-(id<SXIssueCoverLayoutAttributesFactory>)layoutOptionsFactory;
-(id)initWithLayoutAttributesFactory:(id)arg1 ;
-(int)role;
@end

