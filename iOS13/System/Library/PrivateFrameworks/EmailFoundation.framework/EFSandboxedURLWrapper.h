/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, _EFInvokeOnDeallocToken;

@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding> {

	NSURL* _url;
	_EFInvokeOnDeallocToken* _invocable;
	NSString* _sandboxToken;

}

@property (nonatomic,readonly) _EFInvokeOnDeallocToken * invocable;               //@synthesize invocable=_invocable - In the implementation block
@property (nonatomic,readonly) NSString * sandboxToken;                           //@synthesize sandboxToken=_sandboxToken - In the implementation block
@property (readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(void)addInvalidationHandler:(/*^block*/id)arg1 ;
-(NSString *)sandboxToken;
-(_EFInvokeOnDeallocToken *)invocable;
@end

