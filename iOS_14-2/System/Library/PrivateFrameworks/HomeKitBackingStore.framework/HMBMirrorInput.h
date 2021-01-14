/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)abort;
-(HMBLocalSQLContextInputBlock *)block;
-(HMFActivity *)activity;
-(id)logIdentifier;
-(HMBLocalZone *)localZone;
-(void)dealloc;
-(id)initWithLocalZone:(id)arg1 block:(id)arg2 ;
-(id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3 ;
-(id)removeModelWithModelID:(id)arg1 ;
-(id)removeModelWithExternalID:(id)arg1 ;
-(id)commitWithOptions:(id)arg1 error:(id*)arg2 ;
@end

