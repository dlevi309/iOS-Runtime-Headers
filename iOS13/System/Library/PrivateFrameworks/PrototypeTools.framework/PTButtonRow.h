/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_defaultAction;
-(id)outletKeyPath:(id)arg1 ;
-(void)setOutletKeyPath:(NSString *)arg1 ;
-(NSString *)outletKeyPath;
@end

