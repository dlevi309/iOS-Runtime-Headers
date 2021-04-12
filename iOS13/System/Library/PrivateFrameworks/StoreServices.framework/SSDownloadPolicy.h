/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPolicyRules:(NSArray *)arg1 ;
-(NSArray *)policyRules;
-(id)initWithDownloadKind:(id)arg1 URLBagType:(long long)arg2 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithNetworkConstraints:(id)arg1 ;
-(long long)URLBagType;
-(NSString *)downloadKind;
-(void)unionPolicyRule:(id)arg1 ;
-(void)unionNetworkConstraints:(id)arg1 ;
-(id)_policyRuleForSizeLimit:(long long)arg1 ;
-(void)setPolicyRule:(id)arg1 ;
@end

