/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXMutableArrayChangeDetails, NSMutableArray, NSDictionary;

@interface _PXChangeDetailsEntry : NSObject {

	PXMutableArrayChangeDetails* _changeDetails;
	long long _index;
	NSMutableArray* _subitemEntries;

}

@property (nonatomic,readonly) PXMutableArrayChangeDetails * changeDetails;              //@synthesize changeDetails=_changeDetails - In the implementation block
@property (assign,nonatomic) long long index;                                            //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSMutableArray * subitemEntries;                          //@synthesize subitemEntries=_subitemEntries - In the implementation block
@property (nonatomic,readonly) NSDictionary * subitemChangesByItem; 
-(long long)index;
-(id)initWithIndex:(long long)arg1 changeDetails:(id)arg2 ;
-(void)addSubitemEntry:(id)arg1 ;
-(NSMutableArray *)subitemEntries;
-(void)updateWithSectionedChangeDetails:(id)arg1 ;
-(NSDictionary *)subitemChangesByItem;
-(void)setIndex:(long long)arg1 ;
-(PXMutableArrayChangeDetails *)changeDetails;
@end

