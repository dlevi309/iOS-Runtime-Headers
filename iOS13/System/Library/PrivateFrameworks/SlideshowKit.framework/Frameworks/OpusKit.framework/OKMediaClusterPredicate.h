/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)title;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
@end

