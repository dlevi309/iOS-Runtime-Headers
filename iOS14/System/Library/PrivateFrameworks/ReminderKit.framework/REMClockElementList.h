/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSArray;

@interface REMClockElementList : NSObject {

	NSArray* _elements;

}

@property (nonatomic,copy) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
+(BOOL)list:(id)arg1 isCompatibleToList:(id)arg2 ;
+(long long)compareList:(id)arg1 toList:(id)arg2 ;
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(id)description;
-(id)initWithCRVectorTimestampElements:(id)arg1 ;
-(id)initWithTTVectorTimestampElements:(id)arg1 ;
-(void)encodeIntoEntryArchive:(ReplicaEntry*)arg1 ;
-(id)initWithEntryArchive:(const ReplicaEntry*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

