/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


#import <CloudDocsUI/CloudDocsUI-Structs.h>
@class NSExtension, NSString, NSArray;

@interface _UIDocumentPickerDescriptor : NSObject {

	BOOL _newlyAdded;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;                                    //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSArray * supportedContentTypes; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,getter=isNewlyAdded,nonatomic) BOOL newlyAdded;                        //@synthesize newlyAdded=_newlyAdded - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonUIIdentifier; 
@property (nonatomic,retain,readonly) NSString * fileProviderDocumentGroup; 
+(BOOL)isContentManaged;
+(void)setIsContentManaged:(BOOL)arg1 ;
+(void)setHostAuditToken:(SCD_Struct_UI4)arg1 ;
+(SCD_Struct_UI4)hostAuditToken;
+(char)cloudEnabledStatus;
+(char)cloudMigrationStatus;
+(id)manageablePickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(id)allPickers;
+(void)setOrderFromPickers:(id)arg1 ;
+(id)hostBundleID;
+(BOOL)isInAddToiCloudDrive;
+(id)pickerOrder;
+(id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(id)filteredPickersForPickers:(id)arg1 filter:(unsigned long long)arg2 ;
+(id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(void)__updateCloudEnabledStatus;
+(void)_ubiquityIdentityTokenDidChange:(id)arg1 ;
+(void)_updateCloudEnabledStatus;
+(void)setHostBundleID:(id)arg1 ;
+(id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2 ;
+(id)descriptorWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSArray *)supportedContentTypes;
-(BOOL)isNewlyAdded;
-(void)setNewlyAdded:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)imageWithScale:(double)arg1 ;
-(BOOL)pickerEnabledForMode:(unsigned long long)arg1 documentTypes:(id)arg2 reason:(id*)arg3 ;
-(BOOL)supportsPickerMode:(unsigned long long)arg1 ;
-(id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)_ownBundle;
-(id)_parentApp;
-(id)nonUIBundle;
-(NSString *)fileProviderDocumentGroup;
-(NSString *)nonUIIdentifier;
@end

