/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSSet *)updatedAnchors;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(id)initWithUpdatedAnchors:(id)arg1 addedAnchors:(id)arg2 removedAnchors:(id)arg3 ;
-(NSSet *)addedAnchors;
-(void)setReceivedAnchors:(NSSet *)arg1 ;
-(NSSet *)removedAnchors;
-(NSSet *)receivedAnchors;
@end

