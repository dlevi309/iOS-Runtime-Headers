/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)valueForKeyPath:(id)arg1 ;
-(long long)currentIndex;
-(long long)_traverseJSONObject:(id)arg1 ;
-(long long)_visitDictionary:(id)arg1 ;
-(long long)_visitArray:(id)arg1 ;
-(long long)_visitPrimitive:(id)arg1 ;
-(void)traverseJSONObject;
-(NSString *)lastKeyPathComponent;
-(NSString *)currentKeyPath;
-(NSArray *)allKeyPathComponents;
@end

