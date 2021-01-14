/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentViewEngine.h>

@protocol SXComponentViewEngine <NSObject>
@required
-(void)addFactory:(id)arg1;
-(void)addFactory:(id)arg1;
-(void)removeFactory:(id)arg1;
-(void)removeFactory:(id)arg1;
-(id)componentViewForComponent:(id)arg1;
-(id)componentViewForComponent:(id)arg1;

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
-(id<SXComponentViewPostProcessorManager>)postProcessorManager;
-(void)addFactory:(id)arg1 ;
-(void)removeFactory:(id)arg1 ;
-(id)initWithPostProcessorManager:(id)arg1 ;
-(SXComponentTypeMatching *)factoryMatching;
-(id)componentViewForComponent:(id)arg1 ;
@end

