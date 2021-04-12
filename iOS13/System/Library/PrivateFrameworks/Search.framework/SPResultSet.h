/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SPResultSet : NSObject <NSSecureCoding> {

	NSArray* _resultSections;
	NSArray* _stableSections;

}

@property (nonatomic,readonly) NSArray * resultSections;              //@synthesize resultSections=_resultSections - In the implementation block
@property (nonatomic,readonly) NSArray * stableSections;              //@synthesize stableSections=_stableSections - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(id)initWithSections:(id)arg1 stableSections:(id)arg2 ;
-(NSArray *)resultSections;
-(NSArray *)stableSections;
@end

