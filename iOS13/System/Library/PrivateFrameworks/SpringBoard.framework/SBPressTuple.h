/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBPressTuple : NSObject <BSDescriptionProviding> {

	double _durationDown;
	double _durationUp;

}

@property (assign,nonatomic) double durationDown;                   //@synthesize durationDown=_durationDown - In the implementation block
@property (assign,nonatomic) double durationUp;                     //@synthesize durationUp=_durationUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setDurationUp:(double)arg1 ;
-(id)initWithDurationDown:(double)arg1 durationUp:(double)arg2 ;
-(double)durationDown;
-(double)durationUp;
-(void)setDurationDown:(double)arg1 ;
@end

