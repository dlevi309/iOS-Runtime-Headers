/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXComponentViewPostProcessorManager.h>

@protocol SXComponentViewPostProcessorManager <NSObject>
@required
-(void)processComponent:(id)arg1 view:(id)arg2;
-(void)addProcessor:(id)arg1;
-(void)removeProcessor:(id)arg1;

@end


@class NSMutableArray, NSString;

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager> {

	NSMutableArray* _processors;

}

@property (nonatomic,readonly) NSMutableArray * processors;              //@synthesize processors=_processors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)processComponent:(id)arg1 view:(id)arg2 ;
-(void)addProcessor:(id)arg1 ;
-(void)removeProcessor:(id)arg1 ;
-(NSMutableArray *)processors;
@end

