/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityIdentifierInternal.h>

@class NSManagedObjectID, VUIMediaEntityType, NSString;

@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {

	NSManagedObjectID* _managedObjectID;
	VUIMediaEntityType* _mediaEntityType;

}

@property (nonatomic,retain) NSManagedObjectID * managedObjectID;              //@synthesize managedObjectID=_managedObjectID - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;               //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(NSManagedObjectID *)managedObjectID;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2 ;
@end

