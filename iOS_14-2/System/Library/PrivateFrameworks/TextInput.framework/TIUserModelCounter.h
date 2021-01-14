/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSString, NSDate, NSNumber;

@interface TIUserModelCounter : NSObject {

	unsigned long long _persisted;
	unsigned long long _current;
	NSString* _name;
	NSDate* _creationDate;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * count; 
@property (nonatomic,readonly) NSDate * creationDate;                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateDate;              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
-(NSDate *)lastUpdateDate;
-(void)doPersist:(id)arg1 forDate:(id)arg2 ;
-(NSNumber *)count;
-(id)initWithName:(id)arg1 initialCount:(id)arg2 creationDate:(id)arg3 lastUpdateDate:(id)arg4 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSDate *)creationDate;
-(void)add:(int)arg1 ;
@end

