/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSArray;

@interface SSDownloadPolicy : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	long long _bagType;
	NSString* _downloadKind;
	NSMutableArray* _policyRules;

}

@property (nonatomic,readonly) NSString * downloadKind;              //@synthesize downloadKind=_downloadKind - In the implementation block
@property (nonatomic,readonly) long long URLBagType;                 //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,copy) NSArray * policyRules;                    //@synthesize policyRules=_policyRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)URLBagType;
-(id)initWithNetworkConstraints:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)downloadKind;
-(NSArray *)policyRules;
-(void)setPolicyRules:(NSArray *)arg1 ;
-(id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2 ;
-(void)unionPolicyRule:(id)arg1 ;
-(void)unionNetworkConstraints:(id)arg1 ;
-(id)_policyRuleForSizeLimit:(long long)arg1 ;
-(void)setPolicyRule:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

