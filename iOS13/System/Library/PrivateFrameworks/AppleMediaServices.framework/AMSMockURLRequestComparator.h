/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSURLRequestComparator.h>

@class NSString;

@interface AMSMockURLRequestComparator : NSObject <AMSURLRequestComparator> {

	/*^block*/id _criteriaBlock;

}

@property (nonatomic,copy) id criteriaBlock;                        //@synthesize criteriaBlock=_criteriaBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldOverrideURLRequest:(id)arg1 ;
-(id)initWithCriteriaBlock:(/*^block*/id)arg1 ;
-(id)criteriaBlock;
-(void)setCriteriaBlock:(id)arg1 ;
@end

