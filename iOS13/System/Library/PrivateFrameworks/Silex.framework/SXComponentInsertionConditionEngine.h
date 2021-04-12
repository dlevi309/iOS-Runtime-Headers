/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionConditionEngine.h>

@protocol SXComponentInsertionConditionEngine <NSObject>
@required
-(void)addCondition:(id)arg1;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
-(void)insertedComponent:(id)arg1 approximateLocation:(CGPoint)arg2;

@end


@class NSMutableSet, NSString;

@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine> {

	NSMutableSet* _conditions;

}

@property (nonatomic,readonly) NSMutableSet * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addCondition:(id)arg1 ;
-(NSMutableSet *)conditions;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(void)insertedComponent:(id)arg1 approximateLocation:(CGPoint)arg2 ;
@end

