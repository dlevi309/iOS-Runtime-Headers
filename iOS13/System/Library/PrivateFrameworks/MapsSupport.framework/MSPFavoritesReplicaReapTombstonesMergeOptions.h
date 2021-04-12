/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaMergeOptionsReapTombstones.h>
#import <libobjc.A.dylib/MSPFavoritesReplicaMergeOptions.h>

@class NSString;

@interface MSPFavoritesReplicaReapTombstonesMergeOptions : MSPReplicaMergeOptionsReapTombstones <MSPFavoritesReplicaMergeOptions> {

	BOOL _deserializationAllowed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDeserializationAllowed,readonly) BOOL deserializationAllowed;              //@synthesize deserializationAllowed=_deserializationAllowed - In the implementation block
-(BOOL)isDeserializationAllowed;
-(id)initWithDeserializationAllowed:(BOOL)arg1 ;
@end

