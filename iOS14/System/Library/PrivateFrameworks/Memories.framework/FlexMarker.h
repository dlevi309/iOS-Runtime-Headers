/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/NSDictionaryCoding.h>

@class NSString;

@interface FlexMarker : NSObject <NSDictionaryCoding> {

	NSString* _name;
	long long _markerID;
	long long _position;
	unsigned long long _type;
	long long _number;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long markerID;                   //@synthesize markerID=_markerID - In the implementation block
@property (nonatomic,readonly) long long position;                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long number;                     //@synthesize number=_number - In the implementation block
-(long long)position;
-(long long)number;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)type;
-(id)encodeAsDictionary;
-(unsigned long long)_decodeTypeAndBarsFromName;
-(long long)markerID;
-(id)initWithName:(id)arg1 markerID:(long long)arg2 position:(long long)arg3 ;
@end

