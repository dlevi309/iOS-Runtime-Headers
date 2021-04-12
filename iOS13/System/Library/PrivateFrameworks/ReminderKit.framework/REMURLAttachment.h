/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMAttachment.h>

@class NSURL, NSData;

@interface REMURLAttachment : REMAttachment {

	NSURL* _url;
	NSData* _metadata;

}

@property (nonatomic,retain) NSURL * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setMetadata:(NSData *)arg1 ;
-(NSData *)metadata;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 url:(id)arg4 metadata:(id)arg5 ;
@end

