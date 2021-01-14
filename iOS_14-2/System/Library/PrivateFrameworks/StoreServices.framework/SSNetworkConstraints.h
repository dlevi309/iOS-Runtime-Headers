/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SSNetworkConstraints : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sizeLimits;

}

@property (getter=isAnyNetworkTypeEnabled,readonly) BOOL anyNetworkTypeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1 ;
+(id)_newModernNetworkConstraintsWithArray:(id)arg1 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 fromBag:(id)arg2 ;
+(void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3 ;
+(id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2 ;
-(id)init;
-(void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2 ;
-(void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1 ;
-(long long)sizeLimitForNetworkType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAnyNetworkTypeEnabled;
-(id)_copySizeLimits;
-(NSString *)description;
-(void)disableCellularNetworkTypes;
-(long long)_sizeLimitForNetworkType:(long long)arg1 ;
-(void)_disableAllNetworkTypes;
-(BOOL)hasSizeLimitForNetworkType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllNetworkTypesDisabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

