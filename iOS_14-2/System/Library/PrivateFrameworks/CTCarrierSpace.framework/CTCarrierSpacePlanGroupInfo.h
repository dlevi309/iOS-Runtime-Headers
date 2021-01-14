/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding> {

	long long _planCategory;
	NSArray* _groupOptionsList;
	NSString* _groupId;

}

@property (assign,nonatomic) long long planCategory;                  //@synthesize planCategory=_planCategory - In the implementation block
@property (nonatomic,retain) NSString * groupId;                      //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,retain) NSArray * groupOptionsList;              //@synthesize groupOptionsList=_groupOptionsList - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)planCategory;
-(void)setPlanCategory:(long long)arg1 ;
-(id)init;
-(NSString *)groupId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setGroupId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)groupOptionsList;
-(void)setGroupOptionsList:(NSArray *)arg1 ;
@end

