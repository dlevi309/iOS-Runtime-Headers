/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _mustReplay;
	BOOL _mustPush;
	unsigned long long _source;
	unsigned long long _destination;
	NSDate* _committed;
	NSString* _label;

}

@property (nonatomic,readonly) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * committed;                          //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL mustReplay;                             //@synthesize mustReplay=_mustReplay - In the implementation block
@property (nonatomic,readonly) BOOL mustPush;                               //@synthesize mustPush=_mustPush - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)defaultXPCOptions;
+(id)defaultLocalOptions;
+(id)defaultPreferencesOptions;
+(id)defaultCloudOptions;
+(id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4 ;
+(id)defaultResidenceOptions;
+(id)stringForHMDBackingStoreTransactionSource:(unsigned long long)arg1 ;
+(id)stringForHMDBackingStoreDestination:(unsigned long long)arg1 ;
+(id)cloudRequiresPushOptions;
+(id)localPushBackOptions;
+(id)defaultIDSOptions;
+(id)defaultLegacyCloudOptions;
+(id)defaultMetadataCloudOptions;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)source;
-(unsigned long long)destination;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)_description;
-(id)logIdentifier;
-(id)debugString:(BOOL)arg1 ;
-(id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 ;
-(NSDate *)committed;
-(id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(BOOL)arg4 mustPush:(BOOL)arg5 ;
-(BOOL)mustReplay;
-(BOOL)mustPush;
@end

