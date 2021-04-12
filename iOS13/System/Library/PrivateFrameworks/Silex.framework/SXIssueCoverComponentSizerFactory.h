/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXIssueCoverLayoutAttributesFactory;
@class NSString;

@interface SXIssueCoverComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;

}

@property (nonatomic,readonly) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;              //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
-(NSString *)type;
-(int)role;
-(id<SXIssueCoverLayoutAttributesFactory>)layoutOptionsFactory;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id)initWithLayoutAttributesFactory:(id)arg1 ;
@end

