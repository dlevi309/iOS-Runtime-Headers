/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
-(id)initWithCRVectorTimestampElements:(id)arg1 ;
-(id)initWithTTVectorTimestampElements:(id)arg1 ;
-(void)encodeIntoEntryArchive:(ReplicaEntry*)arg1 ;
-(id)initWithEntryArchive:(const ReplicaEntry*)arg1 ;
@end

