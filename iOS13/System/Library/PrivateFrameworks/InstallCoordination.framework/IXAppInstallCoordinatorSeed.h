/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleID;
	NSUUID* _uniqueIdentifier;
	unsigned long long _creator;
	unsigned long long _intent;

}

@property (nonatomic,copy) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long creator;              //@synthesize creator=_creator - In the implementation block
@property (assign,nonatomic) unsigned long long intent;               //@synthesize intent=_intent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)intent;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setIntent:(unsigned long long)arg1 ;
-(unsigned long long)creator;
-(void)setCreator:(unsigned long long)arg1 ;
@end

