/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(id)initWithKey:(id)arg1 label:(id)arg2 labelId:(id)arg3 ;
-(NSString *)labelId;
-(id)_labelKeyDescription;
-(id)initWithLabel:(id)arg1 ;
@end

