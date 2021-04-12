/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSDate, NSString, NSNumber;

@interface TIUserModelDataStoreDurableEntry : NSObject {

	NSDate* _creationDate;
	NSDate* _lastUpdateDate;
	NSString* _key;
	NSNumber* _value;

}

@property (readonly) NSDate * creationDate;                //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) NSDate * lastUpdateDate;              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (readonly) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(NSString *)key;
-(NSNumber *)value;
-(NSDate *)creationDate;
-(NSDate *)lastUpdateDate;
-(id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4 ;
@end

