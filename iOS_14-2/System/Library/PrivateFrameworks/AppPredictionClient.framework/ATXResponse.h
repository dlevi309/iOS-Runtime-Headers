/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSData, NSObject, NSUUID, NSError, NSArray;

@interface ATXResponse : NSObject <NSSecureCoding> {

	NSData* _cacheFileData;
	NSObject*<OS_dispatch_queue> _appClipQueue;
	NSUUID* _uuid;
	NSError* _error;
	NSArray* _predictions;
	NSArray* _proactiveSuggestions;
	NSUUID* _blendingModelUICacheUpdateUUID;

}

@property (nonatomic,readonly) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * predictedApps; 
@property (nonatomic,readonly) NSArray * predictions;                                //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveSuggestions;                       //@synthesize proactiveSuggestions=_proactiveSuggestions - In the implementation block
@property (nonatomic,readonly) NSUUID * blendingModelUICacheUpdateUUID;              //@synthesize blendingModelUICacheUpdateUUID=_blendingModelUICacheUpdateUUID - In the implementation block
@property (nonatomic,readonly) NSData * cacheFileData;                               //@synthesize cacheFileData=_cacheFileData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)enumerateAtxSearchResults:(/*^block*/id)arg1 ;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(NSUUID *)blendingModelUICacheUpdateUUID;
-(NSUUID *)uuid;
-(id)json;
-(id)init;
-(id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3 ;
-(NSArray *)predictions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)jsonDescription;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)cacheFileData;
-(NSArray *)predictedApps;
-(NSArray *)proactiveSuggestions;
-(id)initWithPredictions:(id)arg1 proactiveSuggestions:(id)arg2 uuid:(id)arg3 cacheFileData:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 error:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
@end

