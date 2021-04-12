/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSCoding, NSSecureCoding> {

	unsigned long long _messageCode;
	NSData* _messageBody;
	NSString* _token;
	NSString* _contextName;
	NSString* _contextTransactionAuthor;
	NSString* _processName;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

