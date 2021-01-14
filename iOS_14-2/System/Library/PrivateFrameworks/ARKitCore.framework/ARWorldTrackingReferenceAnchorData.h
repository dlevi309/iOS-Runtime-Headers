/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface ARWorldTrackingReferenceAnchorData : NSObject <ARResultData, NSSecureCoding> {

	double _timestamp;
	NSSet* _updatedAnchors;
	NSSet* _addedAnchors;
	NSSet* _removedAnchors;
	NSSet* _receivedAnchors;

}

@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSSet * updatedAnchors;              //@synthesize updatedAnchors=_updatedAnchors - In the implementation block
@property (nonatomic,readonly) NSSet * addedAnchors;                //@synthesize addedAnchors=_addedAnchors - In the implementation block
@property (nonatomic,readonly) NSSet * removedAnchors;              //@synthesize removedAnchors=_removedAnchors - In the implementation block
@property (nonatomic,retain) NSSet * receivedAnchors;               //@synthesize receivedAnchors=_receivedAnchors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)updatedAnchors;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(id)initWithUpdatedAnchors:(id)arg1 addedAnchors:(id)arg2 removedAnchors:(id)arg3 ;
-(NSSet *)addedAnchors;
-(void)setReceivedAnchors:(NSSet *)arg1 ;
-(NSSet *)removedAnchors;
-(NSSet *)receivedAnchors;
@end

