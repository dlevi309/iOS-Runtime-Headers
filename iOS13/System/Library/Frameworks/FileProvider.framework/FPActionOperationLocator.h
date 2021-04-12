/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(unsigned long long)size;
-(NSString *)filename;
-(void)_setObject:(id)arg1 ;
-(BOOL)isDownloaded;
-(BOOL)isFolder;
-(id)parentIdentifier;
-(BOOL)isProviderItem;
-(FPItem *)asFPItem;
-(BOOL)isExternalURL;
-(NSURL *)asURL;
-(id)underlyingObject;
-(void)attachSandboxExtensionOnXPCEncoding;
-(BOOL)requiresCrossDeviceCopy;
@end

