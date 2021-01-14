/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

