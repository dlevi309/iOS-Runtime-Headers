/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLSAuthTreeNode : NSObject <NSSecureCoding> {

	NSString* _statusID;
	NSString* _identifier;
	long long _status;

}

@property (nonatomic,copy,readonly) NSString * statusID;                //@synthesize statusID=_statusID - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long status;                        //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)statusID;
-(long long)status;
-(id)initWithStatusID:(id)arg1 identifier:(id)arg2 status:(long long)arg3 ;
@end

