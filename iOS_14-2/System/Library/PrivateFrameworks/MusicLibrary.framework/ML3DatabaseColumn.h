/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString;

@interface ML3DatabaseColumn : NSObject {

	NSString* _name;
	unsigned long long _datatype;
	unsigned long long _columnConstraints;
	id _defaultValue;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long datatype;                       //@synthesize datatype=_datatype - In the implementation block
@property (nonatomic,readonly) unsigned long long columnConstraints;              //@synthesize columnConstraints=_columnConstraints - In the implementation block
@property (nonatomic,readonly) id defaultValue;                                   //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)columnWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)defaultValue;
-(NSString *)name;
-(id)description;
-(unsigned long long)datatype;
-(id)initWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)_columnDefinitionSQL;
-(unsigned long long)columnConstraints;
@end

