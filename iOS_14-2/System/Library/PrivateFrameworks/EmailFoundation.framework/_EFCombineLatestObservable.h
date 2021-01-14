/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>

@class NSArray;

@interface _EFCombineLatestObservable : EFObservable {

	NSArray* _observables;

}

@property (nonatomic,copy) NSArray * observables;              //@synthesize observables=_observables - In the implementation block
-(id)subscribe:(id)arg1 ;
-(void)setObservables:(NSArray *)arg1 ;
-(NSArray *)observables;
-(id)initWithObservables:(id)arg1 ;
@end

