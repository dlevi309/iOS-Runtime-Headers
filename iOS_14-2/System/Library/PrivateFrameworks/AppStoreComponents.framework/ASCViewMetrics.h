/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ASCViewMetrics : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _instructions;
	NSDictionary* _pageFields;

}

@property (nonatomic,copy,readonly) NSArray * instructions;                 //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * pageFields;              //@synthesize pageFields=_pageFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)instructions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dataForInvocationPoint:(id)arg1 ;
-(NSDictionary *)pageFields;
-(id)initWithInstructions:(id)arg1 pageFields:(id)arg2 ;
@end

