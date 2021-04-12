/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMFileAttachment.h>

@interface REMImageAttachment : REMFileAttachment {

	unsigned long long _width;
	unsigned long long _height;

}

@property (assign,nonatomic) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)height;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 width:(unsigned long long)arg8 height:(unsigned long long)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
@end

