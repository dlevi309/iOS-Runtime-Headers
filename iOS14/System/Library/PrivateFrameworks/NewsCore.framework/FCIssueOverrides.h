/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCIssueOverrides : NSObject <NSCopying> {

	NSString* _title;
	NSString* _issueDescription;

}

@property (nonatomic,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * issueDescription;              //@synthesize issueDescription=_issueDescription - In the implementation block
-(id)init;
-(NSString *)issueDescription;
-(id)initWithTitle:(id)arg1 issueDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

