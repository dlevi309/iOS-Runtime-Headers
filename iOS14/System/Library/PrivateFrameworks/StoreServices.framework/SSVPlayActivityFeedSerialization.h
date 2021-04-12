/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString;

@interface SSVPlayActivityFeedSerialization : NSObject {

	NSString* _currentStoreFrontID;

}

@property (nonatomic,copy) NSString * currentStoreFrontID;              //@synthesize currentStoreFrontID=_currentStoreFrontID - In the implementation block
+(id)defaultOverrideHTTPHeaderFields;
-(id)propertyListObjectWithPlayActivityEvent:(id)arg1 ;
-(void)setCurrentStoreFrontID:(NSString *)arg1 ;
-(NSString *)currentStoreFrontID;
@end

