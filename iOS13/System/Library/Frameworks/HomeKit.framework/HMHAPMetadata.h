/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMProtoBufMerge.h>

@class NSNumber, NSDictionary, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge> {

	NSNumber* _version;
	NSDictionary* _hapChrMap;
	NSDictionary* _hapSvcMap;
	NSDictionary* _hapCategoryMap;

}

@property (nonatomic,retain) NSDictionary * hapChrMap;                   //@synthesize hapChrMap=_hapChrMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapSvcMap;                   //@synthesize hapSvcMap=_hapSvcMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapCategoryMap;              //@synthesize hapCategoryMap=_hapCategoryMap - In the implementation block
@property (nonatomic,retain) NSNumber * version;                         //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getSharedInstance;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(BOOL)shouldNotCacheCharacteristicOfType:(id)arg1 ;
-(id)characteristicTypeDescription:(id)arg1 ;
-(id)categoryForNumber:(id)arg1 ;
-(BOOL)applyProtoBufData:(id)arg1 callbackOperations:(id)arg2 ;
-(NSDictionary *)hapSvcMap;
-(NSDictionary *)hapChrMap;
-(NSDictionary *)hapCategoryMap;
-(id)categoryForCategoryType:(id)arg1 ;
-(void)setHapChrMap:(NSDictionary *)arg1 ;
-(void)setHapSvcMap:(NSDictionary *)arg1 ;
-(void)setHapCategoryMap:(NSDictionary *)arg1 ;
-(id)serviceTypeDescription:(id)arg1 ;
@end

