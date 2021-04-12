/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>

@class NSArray;

@interface _EFCombineLatestObservable : EFObservable {

	NSArray* _observables;

}

@property (nonatomic,copy) NSArray * observables;              //@synthesize observables=_observables - In the implementation block
-(id)subscribe:(id)arg1 ;
-(id)initWithObservables:(id)arg1 ;
-(NSArray *)observables;
-(void)setObservables:(NSArray *)arg1 ;
@end

