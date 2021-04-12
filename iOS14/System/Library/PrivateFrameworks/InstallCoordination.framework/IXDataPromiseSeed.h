/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)clientPromiseClass;
-(unsigned long long)creatorIdentifier;
-(unsigned long long)totalBytesNeededOnDisk;
-(void)setCreatorIdentifier:(unsigned long long)arg1 ;
-(void)setTotalBytesNeededOnDisk:(unsigned long long)arg1 ;
@end

