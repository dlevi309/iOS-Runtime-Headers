/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutProcessor.h>

@protocol SXComponentInsertionManager;
@class SXLayoutOptions, NSString;

@interface SXComponentInsertionLayoutProcessor : NSObject <SXLayoutProcessor> {

	id<SXComponentInsertionManager> _componentInsertionManager;
	SXLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) id<SXComponentInsertionManager> componentInsertionManager;              //@synthesize componentInsertionManager=_componentInsertionManager - In the implementation block
@property (nonatomic,retain) SXLayoutOptions * layoutOptions;                                          //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3 ;
-(id<SXComponentInsertionManager>)componentInsertionManager;
-(SXLayoutOptions *)layoutOptions;
-(id)initWithComponentInsertionManager:(id)arg1 ;
-(void)setLayoutOptions:(SXLayoutOptions *)arg1 ;
@end

