/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface EMMessageChangeAction : NSObject <NSSecureCoding> {

	NSArray* _objectIDs;

}

@property (nonatomic,copy,readonly) NSArray * objectIDs;              //@synthesize objectIDs=_objectIDs - In the implementation block
@property (nonatomic,readonly) long long signpostType; 
+(BOOL)supportsSecureCoding;
-(long long)signpostType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)objectIDs;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessageListItems:(id)arg1 ;
@end

