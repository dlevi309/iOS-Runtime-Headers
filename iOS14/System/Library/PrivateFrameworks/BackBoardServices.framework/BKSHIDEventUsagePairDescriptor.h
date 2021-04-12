/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor {

	unsigned _page;
	unsigned _usage;

}

@property (readonly) unsigned page;               //@synthesize page=_page - In the implementation block
@property (readonly) unsigned usage;              //@synthesize usage=_usage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorForHIDEventType:(unsigned)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3 ;
-(unsigned)usage;
-(unsigned)page;
-(BOOL)describes:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_page:(unsigned)arg1 usage:(unsigned)arg2 matchesHIDEvent:(IOHIDEventRef)arg3 ;
-(id)_initWithPage:(unsigned)arg1 usage:(unsigned)arg2 eventType:(unsigned)arg3 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

