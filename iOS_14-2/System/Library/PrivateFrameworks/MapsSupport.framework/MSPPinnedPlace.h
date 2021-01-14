/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPPinnedPlaceStorage.h>
#import <libobjc.A.dylib/MSPMutableObject.h>
#import <libobjc.A.dylib/MSPImmutableObject.h>

@class NSUUID, NSString;

@interface MSPPinnedPlace : MSPPinnedPlaceStorage <MSPMutableObject, MSPImmutableObject> {

	NSUUID* _storageIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(id)uuidForIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)storageIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 storageIdentifier:(id)arg2 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)copyIfValidWithError:(out id*)arg1 ;
-(id)initWithStorageIdentifier:(id)arg1 ;
@end

