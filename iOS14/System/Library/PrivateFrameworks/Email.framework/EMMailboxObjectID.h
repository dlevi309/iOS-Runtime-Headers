/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <Email/EMObjectID.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSURL, NSString;

@interface EMMailboxObjectID : EMObjectID <EFPubliclyDescribable> {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSURL *)url;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

