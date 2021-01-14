/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, EFDeallocInvocationToken, NSString;

@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding> {

	NSURL* _url;
	EFDeallocInvocationToken* _invocable;
	NSString* _sandboxToken;

}

@property (nonatomic,readonly) EFDeallocInvocationToken * invocable;              //@synthesize invocable=_invocable - In the implementation block
@property (nonatomic,readonly) NSString * sandboxToken;                           //@synthesize sandboxToken=_sandboxToken - In the implementation block
@property (readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
-(NSString *)ef_publicDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)sandboxToken;
-(NSURL *)url;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)description;
-(EFDeallocInvocationToken *)invocable;
-(id)initWithCoder:(id)arg1 ;
-(void)addInvalidationHandler:(/*^block*/id)arg1 ;
@end

