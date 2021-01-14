/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchBooksResultObject : CATTaskResultObject {

	NSArray* _books;

}

@property (nonatomic,copy) NSArray * books;              //@synthesize books=_books - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)books;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBooks:(NSArray *)arg1 ;
@end

