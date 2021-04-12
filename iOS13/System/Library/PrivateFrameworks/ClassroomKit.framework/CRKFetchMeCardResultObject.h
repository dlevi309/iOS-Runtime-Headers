/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

