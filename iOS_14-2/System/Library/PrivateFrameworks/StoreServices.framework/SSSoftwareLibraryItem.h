/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSString;

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {

	BOOL _beta;
	NSMutableDictionary* _etags;
	BOOL _placeholder;
	BOOL _profileValidated;
	NSMutableDictionary* _propertyValues;
	BOOL _launchProhibited;

}

@property (assign,getter=isBeta,nonatomic) BOOL beta;                                      //@synthesize beta=_beta - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBeta;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isProfileValidated;
-(BOOL)isPlaceholder;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(id)ETagForAssetType:(id)arg1 ;
-(BOOL)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3 ;
-(id)_initWithITunesMetadata:(id)arg1 ;
-(void)setProfileValidated:(BOOL)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isLaunchProhibited;
-(void)dealloc;
@end

