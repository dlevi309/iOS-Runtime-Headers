/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPReplicaMergeOptionsReapTombstones.h>
#import <libobjc.A.dylib/MSPFavoritesReplicaMergeOptions.h>

@class NSString;

@interface MSPFavoritesReplicaReapTombstonesMergeOptions : MSPReplicaMergeOptionsReapTombstones <MSPFavoritesReplicaMergeOptions> {

	BOOL _deserializationAllowed;

}

@property (getter=isDeserializationAllowed,readonly) BOOL deserializationAllowed;              //@synthesize deserializationAllowed=_deserializationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeserializationAllowed;
-(id)initWithDeserializationAllowed:(BOOL)arg1 ;
@end

