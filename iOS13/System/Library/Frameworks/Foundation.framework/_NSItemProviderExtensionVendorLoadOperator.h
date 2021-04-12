/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/_NSItemProviderLoading.h>

@class NSUUID, NSString;

@interface _NSItemProviderExtensionVendorLoadOperator : NSObject <_NSItemProviderLoading> {

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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithExtensionContextIdentifier:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4 ;
-(void)loadPreviewImageWithCompletionHandler:(/*^block*/id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3 ;
-(void)setExtensionContextIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)extensionContextIdentifier;
@end

