/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable;
@interface _EFSamplingObservable : EFObservable {

	id<EFObservable> _observable;
	id<EFObservable> _sampler;

}
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
@end

