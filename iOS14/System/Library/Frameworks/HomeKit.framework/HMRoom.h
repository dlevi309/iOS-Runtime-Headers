/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class NSUUID, HMApplicationData, HMFUnfairLock, NSString, HMHome, _HMContext, NSArray;

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	NSUUID* _uuid;
	HMHome* _home;
	HMApplicationData* _applicationData;
	_HMContext* _context;

}

@property (nonatomic,retain) _HMContext * context;                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                             //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)applicationDataIdentifier;
-(NSUUID *)uuid;
-(id)init;
-(void)_updateRoomName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(HMApplicationData *)applicationData;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)accessories;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)dealloc;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

