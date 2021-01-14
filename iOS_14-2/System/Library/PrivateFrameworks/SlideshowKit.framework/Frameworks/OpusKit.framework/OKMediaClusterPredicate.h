/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSString;

@interface OKMediaClusterPredicate : NSObject {

	NSString* _uniqueID;
	unsigned long long _category;

}

@property (nonatomic,copy) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
+(id)nameForCategory:(unsigned long long)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSString *)uniqueID;
-(id)init;
-(unsigned long long)category;
-(id)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
@end

