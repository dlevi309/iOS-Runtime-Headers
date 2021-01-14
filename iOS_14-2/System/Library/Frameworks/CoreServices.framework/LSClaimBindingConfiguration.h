/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSString;

@interface LSClaimBindingConfiguration : NSObject {

	BOOL _addClaimRecordIfMissing;
	NSString* _typeIdentifier;
	unsigned long long _bundleClassMask;

}

@property (readonly) NSString * typeIdentifier;                     //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign) unsigned long long bundleClassMask;              //@synthesize bundleClassMask=_bundleClassMask - In the implementation block
@property (assign) BOOL addClaimRecordIfMissing;                    //@synthesize addClaimRecordIfMissing=_addClaimRecordIfMissing - In the implementation block
-(unsigned long long)bundleClassMask;
-(void)setBundleClassMask:(unsigned long long)arg1 ;
-(BOOL)addClaimRecordIfMissing;
-(void)setAddClaimRecordIfMissing:(BOOL)arg1 ;
-(NSString *)typeIdentifier;
-(id)initWithTypeIdentifier:(id)arg1 ;
@end

