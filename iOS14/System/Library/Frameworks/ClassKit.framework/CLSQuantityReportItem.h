/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSQuantityReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	double _quantity;

}

@property (assign,nonatomic) double quantity;              //@synthesize quantity=_quantity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)quantity;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuantity:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)add:(id)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
@end

