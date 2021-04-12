/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@class BKSHIDEventDescriptor;

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor {

	unsigned long long _senderID;
	BKSHIDEventDescriptor* _sourceDescriptor;

}

@property (nonatomic,retain) BKSHIDEventDescriptor * sourceDescriptor;              //@synthesize sourceDescriptor=_sourceDescriptor - In the implementation block
@property (readonly) unsigned long long senderID;                                   //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)senderID;
-(BOOL)describes:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 senderID:(unsigned long long)arg2 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(BKSHIDEventDescriptor *)sourceDescriptor;
-(void)setSourceDescriptor:(BKSHIDEventDescriptor *)arg1 ;
@end

