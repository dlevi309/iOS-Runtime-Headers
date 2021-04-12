/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSMutableDictionary, NSString, NSDate, NSNumber;

@interface PHImportDuplicateInfo : NSObject {

	NSMutableDictionary* _info;

}

@property (nonatomic,retain) NSMutableDictionary * info;                     //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDate * imageDate; 
@property (nonatomic,retain) NSDate * alternateImportImageDate; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) NSString * fingerprint; 
@property (nonatomic,readonly) NSString * avchdFingerprint; 
@property (nonatomic,readonly) double timezoneOffset; 
@property (nonatomic,readonly) BOOL hasVideoComplement; 
-(id)description;
-(NSNumber *)fileSize;
-(BOOL)isLegacy;
-(id)objectID;
-(NSMutableDictionary *)info;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)fileName;
-(BOOL)isInTrash;
-(NSString *)fingerprint;
-(BOOL)hasVideoComplement;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(NSDate *)imageDate;
-(id)originatingAssetIdentifier;
-(id)initWithAssetInfo:(id)arg1 ;
-(NSDate *)alternateImportImageDate;
-(NSString *)avchdFingerprint;
-(double)timezoneOffset;
@end

