/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <NSSecureCoding, NSCopying> {

	unsigned _creatorEUID;
	NSString* _bundleID;
	NSUUID* _uniqueIdentifier;
	unsigned long long _creator;
	unsigned long long _intent;

}

@property (nonatomic,copy) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long creator;              //@synthesize creator=_creator - In the implementation block
@property (assign,nonatomic) unsigned creatorEUID;                    //@synthesize creatorEUID=_creatorEUID - In the implementation block
@property (assign,nonatomic) unsigned long long intent;               //@synthesize intent=_intent - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)intent;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setIntent:(unsigned long long)arg1 ;
-(unsigned long long)creator;
-(NSString *)bundleID;
-(void)setCreator:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)creatorEUID;
-(void)setCreatorEUID:(unsigned)arg1 ;
@end

