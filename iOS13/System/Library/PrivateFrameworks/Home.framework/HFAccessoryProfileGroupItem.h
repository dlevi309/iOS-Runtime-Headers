/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemGroupItem.h>
#import <libobjc.A.dylib/HFAccessoryProfileVendor.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicValueSource;
@class NSSet, NSNumber, NSString;

@interface HFAccessoryProfileGroupItem : HFItemGroupItem <HFAccessoryProfileVendor, NSCopying> {

	NSSet* _profiles;
	NSNumber* _groupIdentifier;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) NSSet * profiles;                                         //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * groupIdentifier;                          //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * services; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)groupIdentifier;
-(NSSet *)services;
-(id)accessories;
-(NSSet *)profiles;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 valueSource:(id)arg3 ;
-(id)_buildProfileItems;
@end

