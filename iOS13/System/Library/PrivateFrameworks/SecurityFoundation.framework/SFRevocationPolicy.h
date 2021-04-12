/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)revocationMethods;
-(long long)networkLookup;
-(id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2 ;
-(void)setRevocationMethods:(unsigned long long)arg1 ;
-(void)setNetworkLookup:(long long)arg1 ;
@end

