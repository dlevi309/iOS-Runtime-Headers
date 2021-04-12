/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) BOOL isBRTestMangledID; 
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
+(id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3 ;
+(id)_containerIDFromSharedContainerID:(id)arg1 validate:(BOOL)arg2 ;
+(id)cloudDocsMangledID;
+(id)desktopMangledID;
+(id)documentsMangledID;
+(id)sideCarMangledID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 ;
-(NSString *)ownerName;
-(id)initWithAppLibraryName:(id)arg1 ;
-(NSString *)mangledIDString;
-(BOOL)isEqualToMangledID:(id)arg1 ;
-(NSString *)aliasTargetContainerString;
-(BOOL)isShared;
-(id)initWithRecordZoneID:(id)arg1 ;
-(id)initWithMangledString:(id)arg1 ;
-(id)initWithAliasTargetContainerString:(id)arg1 ;
-(BOOL)isPrivate;
-(BOOL)isCloudDocsMangledID;
-(BOOL)isPassbookMangledID;
-(BOOL)isBRTestMangledID;
-(BOOL)isDesktopMangledID;
-(BOOL)isDocumentsMangledID;
-(NSString *)appLibraryOrZoneName;
@end

