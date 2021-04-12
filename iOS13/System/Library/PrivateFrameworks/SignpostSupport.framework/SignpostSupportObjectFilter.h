/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@interface SignpostSupportObjectFilter : NSObject {

	/*^block*/id _filterBlock;

}

@property (nonatomic,copy,readonly) id filterBlock;              //@synthesize filterBlock=_filterBlock - In the implementation block
-(id)filterBlock;
-(BOOL)passesObject:(id)arg1 ;
-(id)initWithFilterBlock:(/*^block*/id)arg1 ;
@end

