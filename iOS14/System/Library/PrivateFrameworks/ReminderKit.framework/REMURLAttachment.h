/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

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
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setMetadata:(NSData *)arg1 ;
-(NSURL *)url;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 url:(id)arg4 metadata:(id)arg5 ;
-(NSData *)metadata;
-(BOOL)isEqual:(id)arg1 ;
@end

