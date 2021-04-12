/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding> {

	id _keySearchFilterInternal;

}

@property (nonatomic,copy) NSArray * specifiers; 
@property (nonatomic,copy) NSArray * domains; 
+(BOOL)supportsSecureCoding;
-(NSArray *)specifiers;
-(void)setDomains:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)domains;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

