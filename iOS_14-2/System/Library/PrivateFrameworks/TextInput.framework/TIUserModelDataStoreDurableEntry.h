/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
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
-(NSDate *)lastUpdateDate;
-(NSDate *)creationDate;
-(id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4 ;
-(NSString *)key;
-(NSNumber *)value;
@end

