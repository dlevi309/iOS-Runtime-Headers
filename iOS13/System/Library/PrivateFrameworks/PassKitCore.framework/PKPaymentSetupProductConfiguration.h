/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying> {

	NSString* _partnerIdentifier;
	NSString* _productIdentifier;
	unsigned long long _type;
	unsigned long long _state;
	NSString* _dirtyStateIdentifier;
	NSDate* _lastUpdated;
	unsigned long long _featureIdentifier;

}

@property (nonatomic,copy) NSString * partnerIdentifier;                        //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                        //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * dirtyStateIdentifier;                     //@synthesize dirtyStateIdentifier=_dirtyStateIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSDate *)lastUpdated;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)partnerIdentifier;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(id)initWithProductDictionary:(id)arg1 ;
-(NSString *)dirtyStateIdentifier;
-(void)setDirtyStateIdentifier:(NSString *)arg1 ;
@end

