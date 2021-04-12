/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFType.h>

@class NSString, WFImage, NSDictionary, NSURL, NSArray;

@interface WFFileType : WFType {

	NSString* _string;
	const CFStringRef _utType;
	NSString* _pboardType;
	NSString* _OSType;

}

@property (nonatomic,readonly) WFImage * icon; 
@property (nonatomic,readonly) WFImage * documentIcon; 
@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) const CFStringRef utType;                     //@synthesize utType=_utType - In the implementation block
@property (getter=isDeclared,nonatomic,readonly) BOOL declared; 
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,readonly) NSDictionary * typeDeclaration; 
@property (nonatomic,readonly) NSURL * declaringBundleURL; 
@property (nonatomic,readonly) NSArray * typesConformedTo; 
@property (nonatomic,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * pboardType;                        //@synthesize pboardType=_pboardType - In the implementation block
@property (nonatomic,readonly) NSString * OSType;                            //@synthesize OSType=_OSType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)typeWithString:(id)arg1 ;
+(id)typeFromFilename:(id)arg1 ;
+(id)typesFromUTTypes:(id)arg1 ;
+(id)typeWithUTType:(const CFStringRef)arg1 ;
+(id)typeFromMIMEType:(id)arg1 ;
+(id)typesForTagClass:(const CFStringRef)arg1 tag:(const CFStringRef)arg2 conformingToType:(const CFStringRef)arg3 ;
+(id)cachedFileTypeForUTType:(const CFStringRef)arg1 ;
+(id)typeWithUTType:(const CFStringRef)arg1 string:(id)arg2 ;
+(id)typeFromFileExtension:(id)arg1 ;
+(id)typeFromPasteboardType:(id)arg1 ;
+(id)typesFromUTTypes:(id)arg1 excludingType:(id)arg2 ;
+(id)typeForTagClass:(const CFStringRef)arg1 tag:(const CFStringRef)arg2 ;
-(NSString *)string;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(NSURL *)declaringBundleURL;
-(BOOL)isDynamic;
-(BOOL)isDeclared;
-(BOOL)conformsToType:(id)arg1 ;
-(NSString *)MIMEType;
-(WFImage *)icon;
-(NSString *)typeDescription;
-(NSString *)fileExtension;
-(BOOL)conformsToUTType:(const CFStringRef)arg1 ;
-(id)initWithUTType:(const CFStringRef)arg1 ;
-(id)initWithUTType:(const CFStringRef)arg1 string:(id)arg2 ;
-(const CFStringRef)utType;
-(BOOL)isEqualToType:(id)arg1 ;
-(BOOL)isEqualToUTType:(const CFStringRef)arg1 ;
-(BOOL)conformsToUTTypes:(id)arg1 ;
-(id)conformingTypesWithFileExtension:(id)arg1 ;
-(id)conformingTypesWithMIMEType:(id)arg1 ;
-(NSDictionary *)typeDeclaration;
-(NSArray *)typesConformedTo;
-(id)preferredTagWithClass:(const CFStringRef)arg1 ;
-(id)conformingTypesWithTagClass:(const CFStringRef)arg1 tag:(id)arg2 ;
-(NSString *)pboardType;
-(NSString *)OSType;
-(WFImage *)documentIcon;
@end

