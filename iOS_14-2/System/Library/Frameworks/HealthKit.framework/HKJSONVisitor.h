/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKJSONVisitorDelegate;
@class NSString, NSArray;

@interface HKJSONVisitor : NSObject {

	id<HKJSONVisitorDelegate> _delegate;
	id _JSONObject;
	NSString* _currentKeyPath;
	NSArray* _allKeyPathComponents;
	long long _currentIndex;

}

@property (nonatomic,copy,readonly) NSString * currentKeyPath;                    //@synthesize currentKeyPath=_currentKeyPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastKeyPathComponent; 
@property (nonatomic,copy,readonly) NSArray * allKeyPathComponents;               //@synthesize allKeyPathComponents=_allKeyPathComponents - In the implementation block
@property (nonatomic,readonly) long long currentIndex;                            //@synthesize currentIndex=_currentIndex - In the implementation block
+(id)visitorWithJSONObject:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(long long)currentIndex;
-(id)valueForKeyPath:(id)arg1 ;
-(long long)_visitDictionary:(id)arg1 ;
-(long long)_traverseJSONObject:(id)arg1 ;
-(long long)_visitArray:(id)arg1 ;
-(long long)_visitPrimitive:(id)arg1 ;
-(void)traverseJSONObject;
-(NSString *)lastKeyPathComponent;
-(NSString *)currentKeyPath;
-(NSArray *)allKeyPathComponents;
@end

