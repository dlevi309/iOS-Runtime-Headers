/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <Foundation/NSSortDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding> {

	CLLocation* _relativeLocation;

}

@property (nonatomic,copy,readonly) CLLocation * relativeLocation;              //@synthesize relativeLocation=_relativeLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(CLLocation *)relativeLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithKey:(id)arg1 relativeLocation:(id)arg2 ;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

