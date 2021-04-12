/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)domains;
-(void)setDomains:(NSArray *)arg1 ;
-(NSArray *)specifiers;
-(void)setSpecifiers:(NSArray *)arg1 ;
@end

