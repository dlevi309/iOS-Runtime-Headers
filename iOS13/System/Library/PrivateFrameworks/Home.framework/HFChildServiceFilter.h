/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSSet;

@interface HFChildServiceFilter : NSObject {

	NSSet* _childServiceTypes;

}

@property (nonatomic,copy,readonly) NSSet * childServiceTypes;              //@synthesize childServiceTypes=_childServiceTypes - In the implementation block
-(id)initWithChildServiceTypes:(id)arg1 ;
-(NSSet *)childServiceTypes;
-(id)filteredChildServicesForParentService:(id)arg1 ;
@end

