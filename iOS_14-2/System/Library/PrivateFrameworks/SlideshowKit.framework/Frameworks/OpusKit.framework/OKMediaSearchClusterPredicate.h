/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate {

	NSString* _searchString;
	unsigned long long _type;
	unsigned long long _options;

}
-(id)title;
-(void)dealloc;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)initWithString:(id)arg1 type:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
@end

