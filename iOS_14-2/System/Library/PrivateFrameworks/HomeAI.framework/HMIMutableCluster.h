/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSMutableSet, HMIDESMutableFloatArray, NSArray, NSSet, NSString;

@interface HMIMutableCluster : HMFObject <HMFLogging> {

	NSMutableArray* _faceprintUUIDs;
	NSMutableSet* _linkedEntityUUIDs;
	HMIDESMutableFloatArray* _centroid;

}

@property (readonly) HMIDESMutableFloatArray * centroid;              //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) NSArray * faceprintUUIDs; 
@property (readonly) NSSet * linkedEntityUUIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMIDESMutableFloatArray *)centroid;
-(unsigned long long)count;
-(id)initWithFaceprint:(id)arg1 ;
-(NSArray *)faceprintUUIDs;
-(void)addLinkedEntityUUIDs:(id)arg1 ;
-(NSSet *)linkedEntityUUIDs;
-(void)addFaceprints:(id)arg1 ;
@end

