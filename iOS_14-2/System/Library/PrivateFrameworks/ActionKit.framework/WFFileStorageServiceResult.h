/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSSecurityScopedURLWrapper, NSURL;

@interface WFFileStorageServiceResult : NSObject <NSSecureCoding> {

	NSSecurityScopedURLWrapper* _wrappedURL;
	id<NSSecureCoding> _metadataObject;
	NSURL* _lifecycleManagedURL;

}

@property (nonatomic,readonly) NSURL * lifecycleManagedURL;                          //@synthesize lifecycleManagedURL=_lifecycleManagedURL - In the implementation block
@property (nonatomic,readonly) NSSecurityScopedURLWrapper * wrappedURL;              //@synthesize wrappedURL=_wrappedURL - In the implementation block
@property (nonatomic,readonly) id<NSSecureCoding> metadataObject;                    //@synthesize metadataObject=_metadataObject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)possibleMetadataClasses;
+(void)getResultWithFileURL:(id)arg1 consumingBundleID:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
+(id)resultWithMetadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSSecureCoding>)metadataObject;
-(void)dealloc;
-(id)initWithWrappedURL:(id)arg1 metadataObject:(id)arg2 ;
-(id)initWithFileURL:(id)arg1 metadataObject:(id)arg2 ;
-(NSSecurityScopedURLWrapper *)wrappedURL;
-(NSURL *)lifecycleManagedURL;
@end

