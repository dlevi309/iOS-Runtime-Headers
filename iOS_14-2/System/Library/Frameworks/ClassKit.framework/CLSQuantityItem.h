/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSQuantityItem : CLSActivityItem {

	double _quantity;

}

@property (assign,nonatomic) double quantity; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(double)quantity;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuantity:(double)arg1 ;
-(id)_init;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
@end

