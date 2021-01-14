/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityIdentifierInternal.h>

@class NSNumber, VUIMediaEntityType, NSString;

@interface VUIMPMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {

	NSNumber* _persistentID;
	VUIMediaEntityType* _mediaEntityType;

}

@property (nonatomic,copy) NSNumber * persistentID;                           //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;              //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showIdentifierWithMediaItem:(id)arg1 ;
+(id)mediaItemIdentifierWithMediaItem:(id)arg1 ;
-(void)setPersistentID:(NSNumber *)arg1 ;
-(id)init;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(NSString *)description;
-(NSNumber *)persistentID;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2 ;
@end

