/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityIdentifierInternal.h>

@class NSString, VUIMediaEntityType;

@interface VUIPlistMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {

	NSString* _identifier;
	VUIMediaEntityType* _mediaEntityType;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;              //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

