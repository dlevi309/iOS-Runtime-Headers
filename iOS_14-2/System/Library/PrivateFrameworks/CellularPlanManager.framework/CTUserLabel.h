/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding> {

	NSString* _label;
	NSString* _labelId;
	NSString* _key;

}

@property (nonatomic,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * label;                //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * labelId;              //@synthesize labelId=_labelId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)labelId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(long long)indexInPredefinedLabels:(id)arg1 ;
-(id)initWithKey:(id)arg1 label:(id)arg2 labelId:(id)arg3 ;
-(id)_labelKeyDescription;
@end

