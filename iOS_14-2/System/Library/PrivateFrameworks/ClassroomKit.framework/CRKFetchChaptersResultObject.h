/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchChaptersResultObject : CATTaskResultObject {

	NSArray* _chapters;

}

@property (nonatomic,copy) NSArray * chapters;              //@synthesize chapters=_chapters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)chapters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
@end

