/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(NSArray *)objectIDs;
-(id)initWithMessageListItems:(id)arg1 ;
@end

