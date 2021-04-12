/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDSystemAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	BOOL _userInitiated;
	NSString* _bundleID;

}

@property (copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (getter=isUserInitiated) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUserInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(long long)metadataType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

