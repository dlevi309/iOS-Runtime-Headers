/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, UIImage, NSArray;

@interface CNVisualIdentity : NSObject <NSCopying> {

	NSString* _name;
	NSString* _identifier;
	NSData* _imageData;
	NSData* _thumbnailImageData;
	NSData* _fullscreenImageData;
	UIImage* _avatarImage;
	NSString* _abbreviatedName;
	NSData* _imageHash;
	NSString* _imageType;
	NSArray* _contacts;
	NSArray* _linkedContacts;
	long long _identityType;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIImage * avatarImage;                              //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,retain) NSString * abbreviatedName;                         //@synthesize abbreviatedName=_abbreviatedName - In the implementation block
@property (nonatomic,retain) NSData * imageHash;                                 //@synthesize imageHash=_imageHash - In the implementation block
@property (assign,nonatomic) NSString * imageType;                               //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) unsigned long long contactImageType; 
@property (nonatomic,retain) NSArray * contacts;                                 //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSArray * linkedContacts;                           //@synthesize linkedContacts=_linkedContacts - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkedContacts; 
@property (assign,nonatomic) long long identityType;                             //@synthesize identityType=_identityType - In the implementation block
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSData * thumbnailImageData;                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,retain) NSData * fullscreenImageData;                       //@synthesize fullscreenImageData=_fullscreenImageData - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                    //@synthesize cropRect=_cropRect - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)log;
+(id)abbreviatedNameForGroupName:(id)arg1 ;
+(id)descriptorForImageKeys;
+(id)firstComposedCharacterFromString:(id)arg1 ;
-(CGRect)cropRect;
-(void)setContacts:(NSArray *)arg1 ;
-(void)clearImage;
-(NSArray *)contacts;
-(void)setCropRect:(CGRect)arg1 ;
-(NSArray *)linkedContacts;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(id)initWithGroupIdentity:(id)arg1 ;
-(NSData *)imageData;
-(id)initWithContact:(id)arg1 ;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(NSData *)thumbnailImageData;
-(NSData *)imageHash;
-(void)setImageType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSData *)fullscreenImageData;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(NSString *)imageType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)abbreviatedName;
-(BOOL)hasLinkedContacts;
-(unsigned long long)contactImageType;
-(void)updateImageType:(unsigned long long)arg1 ;
-(void)updateImageForContact:(id)arg1 ;
-(void)updateGroupName:(id)arg1 ;
-(BOOL)hasImageDataAvailable;
-(BOOL)canUpdateGroupName;
-(BOOL)imageAllowsEditing;
-(void)setAbbreviatedName:(NSString *)arg1 ;
-(void)setImageHash:(NSData *)arg1 ;
-(long long)identityType;
-(void)setIdentityType:(long long)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end

