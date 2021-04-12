/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AXSSKeyboardCommand : NSObject <NSSecureCoding, NSCopying> {

	NSString* _type;
	NSString* _standardCommandIdentifier;

}

@property (nonatomic,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * standardCommandIdentifier;              //@synthesize standardCommandIdentifier=_standardCommandIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
+(BOOL)supportsSecureCoding;
+(id)commandWithStandardCommandIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(id)initWithType:(id)arg1 ;
-(BOOL)isEqualToCommand:(id)arg1 ;
-(id)initWithStandardCommandIdentifier:(id)arg1 ;
-(id)_initWithType:(id)arg1 standardCommandIdentifier:(id)arg2 ;
-(NSString *)standardCommandIdentifier;
@end

