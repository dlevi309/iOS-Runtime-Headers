/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(NSString *)fillMode;
-(BOOL)isRemovedOnCompletion;
-(NSArray *)allowedKeyPaths;
-(void)setAllowedKeyPaths:(NSArray *)arg1 ;
@end

