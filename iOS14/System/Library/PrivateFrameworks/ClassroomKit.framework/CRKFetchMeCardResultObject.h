/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject {

	NSDictionary* _cardInfo;

}

@property (nonatomic,copy) NSDictionary * cardInfo;              //@synthesize cardInfo=_cardInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)cardInfo;
-(void)setCardInfo:(NSDictionary *)arg1 ;
@end

