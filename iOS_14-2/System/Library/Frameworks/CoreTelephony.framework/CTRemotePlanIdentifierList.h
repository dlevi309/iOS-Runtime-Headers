/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding> {

	NSArray* _planIdentifiers;

}

@property (nonatomic,retain) NSArray * planIdentifiers;              //@synthesize planIdentifiers=_planIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)planIdentifiers;
-(id)init;
-(id)initWithPlanIdentifiers:(id)arg1 ;
-(void)setPlanIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

