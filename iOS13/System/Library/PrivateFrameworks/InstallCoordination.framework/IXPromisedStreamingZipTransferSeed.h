/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	unsigned long long _archiveBytesConsumed;
	unsigned long long _archiveSizeBytes;
	NSDictionary* _szOptions;

}

@property (assign,nonatomic) unsigned long long archiveBytesConsumed;              //@synthesize archiveBytesConsumed=_archiveBytesConsumed - In the implementation block
@property (assign,nonatomic) unsigned long long archiveSizeBytes;                  //@synthesize archiveSizeBytes=_archiveSizeBytes - In the implementation block
@property (nonatomic,copy) NSDictionary * szOptions;                               //@synthesize szOptions=_szOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)clientPromiseClass;
-(unsigned long long)archiveBytesConsumed;
-(unsigned long long)archiveSizeBytes;
-(NSDictionary *)szOptions;
-(void)setArchiveBytesConsumed:(unsigned long long)arg1 ;
-(void)setArchiveSizeBytes:(unsigned long long)arg1 ;
-(void)setSzOptions:(NSDictionary *)arg1 ;
@end

