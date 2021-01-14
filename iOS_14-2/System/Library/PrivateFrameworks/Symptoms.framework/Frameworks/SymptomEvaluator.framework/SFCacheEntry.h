/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSObject, NSDate;

@interface SFCacheEntry : NSObject {

	NSObject* _item;
	NSDate* _lastUsed;

}

@property (nonatomic,retain) NSObject * item;                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDate * lastUsed;              //@synthesize lastUsed=_lastUsed - In the implementation block
-(void)setLastUsed:(NSDate *)arg1 ;
-(NSObject *)item;
-(NSDate *)lastUsed;
-(void)setItem:(NSObject *)arg1 ;
-(id)initWithCacheItem:(id)arg1 ;
@end

