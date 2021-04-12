/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject {

	NSArray* _books;

}

@property (nonatomic,copy,readonly) NSArray * books;              //@synthesize books=_books - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)books;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBooks:(id)arg1 ;
@end

