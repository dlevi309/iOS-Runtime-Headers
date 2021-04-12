/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMSymptom : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _localizedTitle;

}

@property (readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)symptomWithType:(long long)arg1 ;
+(id)unarchive:(id)arg1 ;
+(id)unarchiveSymptomDict:(id)arg1 ;
+(id)archive:(id)arg1 ;
+(id)archiveSymptomDict:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)localizedTitle;
@end

