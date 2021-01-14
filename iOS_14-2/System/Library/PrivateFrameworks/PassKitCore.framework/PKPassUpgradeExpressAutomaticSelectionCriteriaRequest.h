/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassUpgradeRequest.h>

@class NSArray;

@interface PKPassUpgradeExpressAutomaticSelectionCriteriaRequest : PKPassUpgradeRequest {

	NSArray* _technologyTypes;

}

@property (nonatomic,readonly) NSArray * technologyTypes;              //@synthesize technologyTypes=_technologyTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)technologyTypes;
-(id)initWithCoder:(id)arg1 ;
@end

