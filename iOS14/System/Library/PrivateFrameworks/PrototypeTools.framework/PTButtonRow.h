/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@class NSString;

@interface PTButtonRow : PTSRow {

	NSString* _outletKeyPath;

}

@property (nonatomic,copy) NSString * outletKeyPath;              //@synthesize outletKeyPath=_outletKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)rowWithTitle:(id)arg1 action:(id)arg2 ;
+(id)rowWithTitle:(id)arg1 outletKeyPath:(id)arg2 ;
+(id)restoreDefaultSettingsButton;
-(Class)tableViewCellClass;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_defaultAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)outletKeyPath:(id)arg1 ;
-(void)setOutletKeyPath:(NSString *)arg1 ;
-(NSString *)outletKeyPath;
@end

