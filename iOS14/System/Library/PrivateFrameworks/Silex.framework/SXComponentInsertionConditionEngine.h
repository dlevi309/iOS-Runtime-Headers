/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInsertionConditionEngine.h>

@protocol SXComponentInsertionConditionEngine <NSObject>
@required
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2;
-(void)addCondition:(id)arg1;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3;
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
-(NSMutableSet *)conditions;
-(void)prepareWithComponents:(id)arg1 layoutProvider:(id)arg2 ;
-(id)init;
-(void)addCondition:(id)arg1 ;
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(void)insertedComponent:(id)arg1 approximateLocation:(CGPoint)arg2 ;
@end

