/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSQuantityItem : CLSActivityItem {

	double _quantity;

}

@property (assign,nonatomic) double quantity; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(double)quantity;
-(void)setQuantity:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
@end

