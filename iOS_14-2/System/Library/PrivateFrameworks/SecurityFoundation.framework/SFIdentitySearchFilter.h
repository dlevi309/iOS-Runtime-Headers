/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFIdentitySearchFilter : NSObject <NSCopying, NSSecureCoding> {

	id _identitySearchFilterInternal;

}

@property (nonatomic,copy) NSArray * certificateSerialNumbers; 
@property (nonatomic,copy) NSArray * certificateTypes; 
@property (nonatomic,copy) NSArray * keySpecifiers; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)certificateSerialNumbers;
-(NSArray *)certificateTypes;
-(NSArray *)keySpecifiers;
-(void)setCertificateSerialNumbers:(NSArray *)arg1 ;
-(void)setCertificateTypes:(NSArray *)arg1 ;
-(void)setKeySpecifiers:(NSArray *)arg1 ;
@end

