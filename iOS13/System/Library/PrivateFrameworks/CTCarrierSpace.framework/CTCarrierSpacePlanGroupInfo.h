/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)planCategory;
-(void)setPlanCategory:(long long)arg1 ;
-(NSString *)groupId;
-(void)setGroupId:(NSString *)arg1 ;
-(NSArray *)groupOptionsList;
-(void)setGroupOptionsList:(NSArray *)arg1 ;
@end

