/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)imageDate;
-(NSString *)fingerprint;
-(NSDate *)alternateImportImageDate;
-(NSMutableDictionary *)info;
-(BOOL)isLegacy;
-(NSNumber *)fileSize;
-(double)timezoneOffset;
-(NSString *)fileName;
-(id)objectID;
-(id)initWithAssetInfo:(id)arg1 ;
-(BOOL)hasVideoComplement;
-(NSString *)avchdFingerprint;
-(id)originatingAssetIdentifier;
-(id)description;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(BOOL)isInTrash;
@end

