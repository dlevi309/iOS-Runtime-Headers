/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPFavoritesReplicaMergeOptions.h>

@protocol MSPFavoritesReplicaMergeOptions <MSPReplicaMergeOptions>
@property (getter=isDeserializationAllowed,readonly) BOOL deserializationAllowed; 
@required
-(BOOL)isDeserializationAllowed;
-(id)initWithDeserializationAllowed:(BOOL)arg1;

@end


@class NSString;

@interface MSPFavoritesReplicaMergeOptions : NSObject <MSPFavoritesReplicaMergeOptions> {

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

