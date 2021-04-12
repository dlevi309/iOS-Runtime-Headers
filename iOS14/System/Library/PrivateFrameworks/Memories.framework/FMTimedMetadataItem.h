/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FMTimedMetadataItem : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _values;
	SCD_Struct_PM9 _timeRange;

}

@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) SCD_Struct_PM9 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) NSDictionary * values;                 //@synthesize values=_values - In the implementation block
-(NSDictionary *)values;
-(SCD_Struct_PM9)timeRange;
-(NSString *)name;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 timeRange:(SCD_Struct_PM9)arg3 values:(id)arg4 ;
-(void)adjustDurationTo:(SCD_Struct_PM8)arg1 ;
@end

