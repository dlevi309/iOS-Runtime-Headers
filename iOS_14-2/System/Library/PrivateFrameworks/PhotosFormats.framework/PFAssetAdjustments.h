/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDictionary, NSString, NSData;

@interface PFAssetAdjustments : NSObject <NSCopying> {

	NSDate* _adjustmentTimestamp;
	NSDictionary* _propertyListDictionary;

}

@property (nonatomic,copy,readonly) NSString * adjustmentFormatIdentifier; 
@property (nonatomic,copy,readonly) NSString * adjustmentFormatVersion; 
@property (nonatomic,readonly) NSData * adjustmentData; 
@property (nonatomic,copy,readonly) NSString * editorBundleID; 
@property (nonatomic,readonly) long long adjustmentBaseVersion; 
@property (nonatomic,readonly) unsigned adjustmentRenderTypes; 
@property (assign,nonatomic) NSDate * adjustmentTimestamp; 
@property (nonatomic,retain) NSDictionary * propertyListDictionary;                     //@synthesize propertyListDictionary=_propertyListDictionary - In the implementation block
+(id)fingerprintWithAssetAdjustmentFingerprintData:(id)arg1 ;
+(BOOL)writeReassembleAdjustmentsPropertyListAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)adjustmentsPropertyListFileRequiresOverflowDataReassemblyAtURL:(id)arg1 predictedSize:(long long*)arg2 ;
+(id)fingerPrintForData:(id)arg1 error:(id*)arg2 ;
+(id)dataForOverflowDataReassembledAdjustmentsPropertyListAtURL:(id)arg1 error:(id*)arg2 ;
-(id)phAdjustmentData;
-(long long)adjustmentBaseVersion;
-(NSString *)editorBundleID;
-(NSDictionary *)propertyListDictionary;
-(id)initWithURL:(id)arg1 ;
-(NSData *)adjustmentData;
-(NSDate *)adjustmentTimestamp;
-(id)description;
-(NSString *)adjustmentFormatVersion;
-(NSString *)adjustmentFormatIdentifier;
-(void)setAdjustmentTimestamp:(NSDate *)arg1 ;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderTypes:(unsigned)arg6 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(unsigned)adjustmentRenderTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(void)setPropertyListDictionary:(NSDictionary *)arg1 ;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 ;
-(id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 ;
@end

