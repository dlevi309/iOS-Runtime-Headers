/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)resultSections;
-(id)initWithSections:(id)arg1 stableSections:(id)arg2 ;
-(NSArray *)stableSections;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSections:(id)arg1 ;
@end

