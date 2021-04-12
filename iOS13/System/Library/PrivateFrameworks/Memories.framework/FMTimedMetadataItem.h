/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FMTimedMetadataItem : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _values;
	SCD_Struct_PM6 _timeRange;

}

@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) SCD_Struct_PM6 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) NSDictionary * values;                 //@synthesize values=_values - In the implementation block
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)values;
-(NSString *)identifier;
-(SCD_Struct_PM6)timeRange;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 timeRange:(SCD_Struct_PM6)arg3 values:(id)arg4 ;
-(void)adjustDurationTo:(SCD_Struct_PM5)arg1 ;
@end

