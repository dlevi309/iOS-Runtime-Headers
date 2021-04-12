/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentViewEngine.h>

@protocol SXComponentViewEngine <NSObject>
@required
-(id)componentViewForComponent:(id)arg1;
-(void)addFactory:(id)arg1;
-(void)removeFactory:(id)arg1;

@end


@protocol SXComponentViewPostProcessorManager;
@class SXComponentTypeMatching, NSString;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine> {

	SXComponentTypeMatching* _factoryMatching;
	id<SXComponentViewPostProcessorManager> _postProcessorManager;

}

@property (nonatomic,readonly) SXComponentTypeMatching * factoryMatching;                                 //@synthesize factoryMatching=_factoryMatching - In the implementation block
@property (nonatomic,readonly) id<SXComponentViewPostProcessorManager> postProcessorManager;              //@synthesize postProcessorManager=_postProcessorManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentViewForComponent:(id)arg1 ;
-(void)addFactory:(id)arg1 ;
-(void)removeFactory:(id)arg1 ;
-(id)initWithPostProcessorManager:(id)arg1 ;
-(SXComponentTypeMatching *)factoryMatching;
-(id<SXComponentViewPostProcessorManager>)postProcessorManager;
@end

