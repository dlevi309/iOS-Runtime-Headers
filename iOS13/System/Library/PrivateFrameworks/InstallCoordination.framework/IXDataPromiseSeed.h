/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	unsigned long long _creatorIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned long long _totalBytesNeededOnDisk;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long creatorIdentifier;                   //@synthesize creatorIdentifier=_creatorIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytesNeededOnDisk;              //@synthesize totalBytesNeededOnDisk=_totalBytesNeededOnDisk - In the implementation block
@property (nonatomic,readonly) Class clientPromiseClass; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(Class)clientPromiseClass;
-(unsigned long long)creatorIdentifier;
-(unsigned long long)totalBytesNeededOnDisk;
-(void)setCreatorIdentifier:(unsigned long long)arg1 ;
-(void)setTotalBytesNeededOnDisk:(unsigned long long)arg1 ;
@end

