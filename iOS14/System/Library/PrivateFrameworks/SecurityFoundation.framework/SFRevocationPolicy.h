/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding> {

	id _revocationPolicyInternal;

}

@property (assign,nonatomic) unsigned long long revocationMethods; 
@property (assign,nonatomic) long long networkLookup; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)revocationMethods;
-(long long)networkLookup;
-(id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2 ;
-(void)setRevocationMethods:(unsigned long long)arg1 ;
-(void)setNetworkLookup:(long long)arg1 ;
@end

