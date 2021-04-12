/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CDDCloudKitMessage, NSError;

@interface CDDCloudKitResponse : NSObject <NSCoding, NSSecureCoding> {

	BOOL _success;
	CDDCloudKitMessage* _message;
	NSError* _error;

}

@property (nonatomic,readonly) CDDCloudKitMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)supportedErrorClasses;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(CDDCloudKitMessage *)message;
-(BOOL)success;
-(id)initWithMessage:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
@end

