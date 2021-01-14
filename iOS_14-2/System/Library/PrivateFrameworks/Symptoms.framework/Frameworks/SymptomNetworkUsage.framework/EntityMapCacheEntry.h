/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@class NSDate, NSObject;

@interface EntityMapCacheEntry : NSObject {

	NSDate* _expiryTime;
	NSObject* _entityName;

}

@property (retain) NSDate * expiryTime;                //@synthesize expiryTime=_expiryTime - In the implementation block
@property (retain) NSObject * entityName;              //@synthesize entityName=_entityName - In the implementation block
-(NSObject *)entityName;
-(void)setEntityName:(NSObject *)arg1 ;
-(void)setExpiryTime:(NSDate *)arg1 ;
-(id)description;
-(NSDate *)expiryTime;
@end

