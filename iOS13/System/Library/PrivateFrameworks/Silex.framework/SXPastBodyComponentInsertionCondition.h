/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionCondition.h>

@protocol SXComponent;
@class NSString;

@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {

	id<SXComponent> _firstBodyComponent;
	CGPoint _firstBodyComponentThreshold;

}

@property (nonatomic,retain) id<SXComponent> firstBodyComponent;               //@synthesize firstBodyComponent=_firstBodyComponent - In the implementation block
@property (assign,nonatomic) CGPoint firstBodyComponentThreshold;              //@synthesize firstBodyComponentThreshold=_firstBodyComponentThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(id)findFirstBodyComponentInComponents:(id)arg1 ;
-(void)setFirstBodyComponentThreshold:(CGPoint)arg1 ;
-(void)setFirstBodyComponent:(id<SXComponent>)arg1 ;
-(CGPoint)firstBodyComponentThreshold;
-(id<SXComponent>)firstBodyComponent;
@end

