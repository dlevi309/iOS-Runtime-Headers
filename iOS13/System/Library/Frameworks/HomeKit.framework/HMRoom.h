/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) _HMContext * context;                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)name;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(NSArray *)accessories;
-(HMApplicationData *)applicationData;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)applicationDataIdentifier;
-(void)_updateRoomName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

