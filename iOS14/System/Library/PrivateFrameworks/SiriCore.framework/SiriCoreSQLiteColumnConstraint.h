/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SiriCoreSQLiteValue;
@class NSString;

@interface SiriCoreSQLiteColumnConstraint : NSObject <NSCopying> {

	NSString* _name;
	long long _type;
	id<SiriCoreSQLiteValue> _value;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id<SiriCoreSQLiteValue> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
+(id)uniqueColumnConstraintWithName:(id)arg1 ;
+(id)notNullColumnConstraintWithName:(id)arg1 ;
+(id)defaultColumnConstraintWithName:(id)arg1 value:(id)arg2 ;
+(id)primaryKeyColumnConstraintWithName:(id)arg1 usesAutoIncrement:(BOOL)arg2 ;
-(unsigned long long)options;
-(NSString *)name;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SiriCoreSQLiteValue>)value;
-(id)initWithName:(id)arg1 type:(long long)arg2 value:(id)arg3 options:(unsigned long long)arg4 ;
@end

