/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerEngine.h>

@protocol SXComponentSizerEngine <NSObject>
@required
-(void)addFactory:(id)arg1;
-(void)addFactory:(id)arg1;
-(void)removeFactory:(id)arg1;
-(void)removeFactory:(id)arg1;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;

@end


@class SXComponentTypeMatching, NSString;

@interface SXComponentSizerEngine : NSObject <SXComponentSizerEngine> {

	SXComponentTypeMatching* _factoryMatching;

}

@property (nonatomic,readonly) SXComponentTypeMatching * factoryMatching;              //@synthesize factoryMatching=_factoryMatching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addFactory:(id)arg1 ;
-(void)removeFactory:(id)arg1 ;
-(id)init;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(SXComponentTypeMatching *)factoryMatching;
@end

