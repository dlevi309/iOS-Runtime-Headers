/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRepairKit.framework/CoreRepairKit
*/

#import <CoreRepairKit/CoreRepairKit-Structs.h>
#import <libobjc.A.dylib/CRFDR.h>

@protocol setupModuleChallengeCallBack;
@class NSString, NSData;

@interface CRFDRSeal : NSObject <CRFDR> {

	NSString* serialNumber;
	NSString* updateClassStr;
	NSString* updatePropertiesStr;
	NSString* FDRCAURL;
	NSString* trustObjectURL;
	NSString* FDRDSURL;
	NSString* FDRSealingURL;
	BOOL doSeal;
	BOOL enableProxy;
	CFURLRef dataDirectoryURL;
	CFDictionaryRef metadataDict;
	NSData* apTicketData;
	id<setupModuleChallengeCallBack> delegate;

}

@property (nonatomic,retain) NSData * apTicketData; 
@property (assign,nonatomic,__weak) id<setupModuleChallengeCallBack> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)currentProcessHasEntitlement:(id)arg1 ;
+(BOOL)isFDRDataClassSupported:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<setupModuleChallengeCallBack>)delegate;
-(void)setDelegate:(id<setupModuleChallengeCallBack>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(long long)sealWithhDataClass:(id)arg1 fdrError:(id*)arg2 registerOnly:(BOOL)arg3 ;
-(BOOL)IsTatsuErrorNetworkingRelated:(int)arg1 ;
-(id)_baseFDROptionsWithDataStore:(id)arg1 ;
-(int)parseAMFDRUnderlyingError:(id)arg1 ;
-(long long)registerChangeForComponent:(id)arg1 fdrError:(id*)arg2 ;
-(long long)seal:(id*)arg1 ;
-(NSData *)apTicketData;
-(void)setApTicketData:(NSData *)arg1 ;
@end

