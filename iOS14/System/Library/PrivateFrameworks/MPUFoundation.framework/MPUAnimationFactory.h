/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSArray, NSString, CAMediaTimingFunction;

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	BOOL _removedOnCompletion;
	NSArray* _allowedKeyPaths;
	NSString* _fillMode;
	double _timeOffset;
	CAMediaTimingFunction* _timingFunction;

}

@property (nonatomic,copy) NSArray * allowedKeyPaths;                                            //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * fillMode;                                                  //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,getter=isRemovedOnCompletion,nonatomic) BOOL removedOnCompletion;              //@synthesize removedOnCompletion=_removedOnCompletion - In the implementation block
@property (assign,nonatomic) double timeOffset;                                                  //@synthesize timeOffset=_timeOffset - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                             //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)allowedKeyPaths;
-(id)init;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)timeOffset;
-(NSString *)fillMode;
-(id)_timingFunctionForAnimation;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(BOOL)isRemovedOnCompletion;
-(void)setAllowedKeyPaths:(NSArray *)arg1 ;
@end

