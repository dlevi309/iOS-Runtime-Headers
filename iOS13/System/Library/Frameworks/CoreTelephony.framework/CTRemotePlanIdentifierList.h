/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding> {

	NSArray* _planIdentifiers;

}

@property (nonatomic,retain) NSArray * planIdentifiers;              //@synthesize planIdentifiers=_planIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)planIdentifiers;
-(id)initWithPlanIdentifiers:(id)arg1 ;
-(void)setPlanIdentifiers:(NSArray *)arg1 ;
@end

