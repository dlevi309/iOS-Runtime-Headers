/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, ENRegion;

@interface ENExposureDetectionHistoryFile : NSObject <CUXPCCodable> {

	NSData* _fileHash;
	NSDate* _processDate;
	NSDictionary* _metadata;
	NSNumber* _keyCount;
	NSNumber* _matchCount;
	NSString* _sourceAppBundleIdentifier;
	ENRegion* _sourceRegion;

}

@property (nonatomic,copy) NSData * fileHash;                                 //@synthesize fileHash=_fileHash - In the implementation block
@property (nonatomic,copy) NSDate * processDate;                              //@synthesize processDate=_processDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSNumber * keyCount;                               //@synthesize keyCount=_keyCount - In the implementation block
@property (nonatomic,copy) NSNumber * matchCount;                             //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,copy) NSString * sourceAppBundleIdentifier;              //@synthesize sourceAppBundleIdentifier=_sourceAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) ENRegion * sourceRegion;                           //@synthesize sourceRegion=_sourceRegion - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSString *)sourceAppBundleIdentifier;
-(void)setSourceAppBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)matchCount;
-(NSData *)fileHash;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setFileHash:(NSData *)arg1 ;
-(id)description;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)metadata;
-(NSNumber *)keyCount;
-(void)setMatchCount:(NSNumber *)arg1 ;
-(NSDate *)processDate;
-(void)setProcessDate:(NSDate *)arg1 ;
-(void)setKeyCount:(NSNumber *)arg1 ;
-(ENRegion *)sourceRegion;
-(void)setSourceRegion:(ENRegion *)arg1 ;
@end

