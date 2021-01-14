/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STGenericIntentPerson : NSObject <NSSecureCoding> {

	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

