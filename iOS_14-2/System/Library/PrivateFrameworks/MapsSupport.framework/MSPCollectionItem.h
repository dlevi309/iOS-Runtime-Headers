/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPMutableObject.h>
#import <libobjc.A.dylib/MSPImmutableObject.h>

@class NSUUID, NSString;

@interface MSPCollectionItem : NSObject <MSPMutableObject, MSPImmutableObject> {

	NSUUID* _storageIdentifier;
	NSString* _itemIdentifier;

}

@property (nonatomic,copy) NSString * itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(NSString *)itemIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)description;
-(id)storageIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)copyIfValidWithError:(out id*)arg1 ;
@end

