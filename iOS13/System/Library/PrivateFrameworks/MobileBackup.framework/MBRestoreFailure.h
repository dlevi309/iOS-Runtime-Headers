/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSError;

@interface MBRestoreFailure : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _displayName;
	NSString* _dataclass;
	NSString* _assetType;
	NSData* _icon;
	NSError* _error;

}

@property (nonatomic,copy) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * dataclass;                //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,copy) NSString * assetType;                //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy) NSData * icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)icon;
-(void)setIcon:(NSData *)arg1 ;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(NSString *)dataclass;
-(void)setDataclass:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 displayName:(id)arg4 error:(id)arg5 ;
@end

