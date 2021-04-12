/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSObject, FPItem, NSURL, NSString;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding> {

	NSObject* _object;

}

@property (nonatomic,readonly) BOOL isExternalURL; 
@property (nonatomic,readonly) BOOL isProviderItem; 
@property (nonatomic,readonly) FPItem * asFPItem; 
@property (nonatomic,readonly) NSURL * asURL; 
@property (nonatomic,readonly) id underlyingObject; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) id parentIdentifier; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL requiresCrossDeviceCopy; 
+(BOOL)supportsSecureCoding;
+(id)locatorForItem:(id)arg1 ;
+(id)locatorForURL:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(BOOL)isDownloaded;
-(NSURL *)asURL;
-(void)_setObject:(id)arg1 ;
-(unsigned long long)size;
-(NSString *)filename;
-(id)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(FPItem *)asFPItem;
-(BOOL)isProviderItem;
-(BOOL)isExternalURL;
-(id)underlyingObject;
-(BOOL)isFolder;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

