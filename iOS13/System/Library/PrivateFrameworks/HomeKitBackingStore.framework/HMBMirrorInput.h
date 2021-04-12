/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMBLocalZone, HMBLocalSQLContextInputBlock, HMFActivity, NSString;

@interface HMBMirrorInput : HMFObject <HMFLogging> {

	HMBLocalZone* _localZone;
	HMBLocalSQLContextInputBlock* _block;
	HMFActivity* _activity;

}

@property (nonatomic,__weak,readonly) HMBLocalZone * localZone;                   //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLContextInputBlock * block;              //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                            //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(HMFActivity *)activity;
-(HMBLocalSQLContextInputBlock *)block;
-(id)abort;
-(id)logIdentifier;
-(HMBLocalZone *)localZone;
-(id)initWithLocalZone:(id)arg1 block:(id)arg2 ;
-(id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3 ;
-(id)updateModelData:(id)arg1 modelEncoding:(unsigned long long)arg2 externalID:(id)arg3 externalData:(id)arg4 ;
-(id)removeModelWithModelID:(id)arg1 ;
-(id)removeModelWithExternalID:(id)arg1 ;
-(id)commitWithOptions:(id)arg1 error:(id*)arg2 ;
@end

