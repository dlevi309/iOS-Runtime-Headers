/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentSizerEngine.h>

@protocol SXComponentSizerEngine <NSObject>
@required
-(void)addFactory:(id)arg1;
-(void)removeFactory:(id)arg1;
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
-(id)init;
-(void)addFactory:(id)arg1 ;
-(void)removeFactory:(id)arg1 ;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(SXComponentTypeMatching *)factoryMatching;
@end

