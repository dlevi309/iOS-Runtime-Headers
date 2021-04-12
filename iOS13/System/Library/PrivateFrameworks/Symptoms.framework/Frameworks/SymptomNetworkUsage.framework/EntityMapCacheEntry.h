/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@class NSDate, NSObject;

@interface EntityMapCacheEntry : NSObject {

	NSDate* _expiryTime;
	NSObject* _entityName;

}

@property (retain) NSDate * expiryTime;                //@synthesize expiryTime=_expiryTime - In the implementation block
@property (retain) NSObject * entityName;              //@synthesize entityName=_entityName - In the implementation block
-(id)description;
-(NSObject *)entityName;
-(void)setEntityName:(NSObject *)arg1 ;
-(NSDate *)expiryTime;
-(void)setExpiryTime:(NSDate *)arg1 ;
@end

