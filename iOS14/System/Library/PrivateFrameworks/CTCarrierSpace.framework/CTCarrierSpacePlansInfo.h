/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding> {

	NSArray* _planGroupsList;
	NSString* _morePlansURL;

}

@property (nonatomic,retain) NSArray * planGroupsList;              //@synthesize planGroupsList=_planGroupsList - In the implementation block
@property (nonatomic,retain) NSString * morePlansURL;               //@synthesize morePlansURL=_morePlansURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)morePlansURL;
-(void)setMorePlansURL:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)planGroupsList;
-(void)setPlanGroupsList:(NSArray *)arg1 ;
@end

