/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/


@class NSString;

@interface AMSUIDynamicImpressionMetricsIdentifier : NSObject {

	NSString* _element;
	long long _index;
	NSString* _parent;

}

@property (nonatomic,retain) NSString * element;              //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) long long index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * parent;               //@synthesize parent=_parent - In the implementation block
-(long long)index;
-(NSString *)parent;
-(NSString *)element;
-(void)setElement:(NSString *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)setParent:(NSString *)arg1 ;
-(id)initWithParent:(id)arg1 element:(id)arg2 index:(long long)arg3 ;
@end

