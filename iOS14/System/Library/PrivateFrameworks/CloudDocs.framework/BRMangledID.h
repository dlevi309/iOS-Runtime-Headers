/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying> {

	NSString* _mangledIDString;

}

@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) BOOL isCloudDocsMangledID; 
@property (nonatomic,readonly) BOOL isPassbookMangledID; 
@property (nonatomic,readonly) BOOL isDesktopMangledID; 
@property (nonatomic,readonly) BOOL isDocumentsMangledID; 
@property (nonatomic,readonly) NSString * appLibraryOrZoneName; 
@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) NSString * mangledIDString;                         //@synthesize mangledIDString=_mangledIDString - In the implementation block
@property (nonatomic,readonly) NSString * aliasTargetContainerString; 
+(BOOL)supportsSecureCoding;
+(id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3 ;
+(BOOL)validateContainerID:(id)arg1 ;
+(id)_privateMangledContainerID:(id)arg1 validate:(BOOL)arg2 ;
+(BOOL)validateMangledIDString:(id)arg1 ;
+(id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(BOOL)arg2 ;
+(id)_privateUnmangledContainerID:(id)arg1 validate:(BOOL)arg2 ;
+(id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(BOOL)arg2 ;
+(BOOL)validateOwnerName:(id)arg1 ;
+(id)cloudDocsMangledID;
+(id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3 ;
+(id)_containerIDFromSharedContainerID:(id)arg1 validate:(BOOL)arg2 ;
+(id)desktopMangledID;
+(id)documentsMangledID;
+(id)sideCarMangledID;
-(id)initWithRecordZoneID:(id)arg1 ;
-(id)initWithAppLibraryName:(id)arg1 ;
-(NSString *)mangledIDString;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToMangledID:(id)arg1 ;
-(NSString *)aliasTargetContainerString;
-(id)initWithMangledString:(id)arg1 ;
-(id)initWithAliasTargetContainerString:(id)arg1 ;
-(BOOL)isCloudDocsMangledID;
-(BOOL)isPassbookMangledID;
-(BOOL)isDesktopMangledID;
-(BOOL)isDocumentsMangledID;
-(NSString *)appLibraryOrZoneName;
-(id)description;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isPrivate;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isShared;
-(NSString *)ownerName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

