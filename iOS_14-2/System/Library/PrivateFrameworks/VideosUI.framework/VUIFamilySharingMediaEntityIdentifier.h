/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityIdentifierInternal.h>

@class VUIMediaEntityType, NSString;

@interface VUIFamilySharingMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {

	NSString* _objectIdentifier;
	VUIMediaEntityType* _mediaEntityType;

}

@property (nonatomic,retain) NSString * objectIdentifier;                     //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;              //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setObjectIdentifier:(NSString *)arg1 ;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(unsigned long long)hash;
-(NSString *)objectIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntityIdentifier:(id)arg1 mediaEntityType:(id)arg2 ;
@end

