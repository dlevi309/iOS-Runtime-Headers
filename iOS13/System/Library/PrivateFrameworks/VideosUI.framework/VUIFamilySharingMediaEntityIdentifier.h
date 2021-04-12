/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)objectIdentifier;
-(void)setObjectIdentifier:(NSString *)arg1 ;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(id)initWithEntityIdentifier:(id)arg1 mediaEntityType:(id)arg2 ;
@end

