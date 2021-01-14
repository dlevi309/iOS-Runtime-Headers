/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
*/

#import <libobjc.A.dylib/_EXItemProviderLoading.h>

@class NSUUID, NSString;

@interface _EXItemProviderExtensionVendorLoadOperator : NSObject <_EXItemProviderLoading> {

	NSUUID* _identifier;
	NSUUID* _extensionContextIdentifier;

}

@property (nonatomic,copy) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * extensionContextIdentifier;              //@synthesize extensionContextIdentifier=_extensionContextIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4 ;
-(void)loadPreviewImageWithCompletionHandler:(/*^block*/id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3 ;
-(id)initWithExtensionContextIdentifier:(id)arg1 ;
-(void)setExtensionContextIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)extensionContextIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)dealloc;
@end

