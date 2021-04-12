/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)certificateSerialNumbers;
-(NSArray *)certificateTypes;
-(NSArray *)keySpecifiers;
-(void)setCertificateSerialNumbers:(NSArray *)arg1 ;
-(void)setCertificateTypes:(NSArray *)arg1 ;
-(void)setKeySpecifiers:(NSArray *)arg1 ;
@end

