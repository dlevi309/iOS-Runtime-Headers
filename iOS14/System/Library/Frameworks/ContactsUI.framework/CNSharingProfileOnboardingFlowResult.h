/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


#import <ContactsUI/ContactsUI-Structs.h>
@class NSString, NSData;

@interface CNSharingProfileOnboardingFlowResult : NSObject {

	BOOL _didPersistImageToContact;
	NSString* _givenName;
	NSString* _familyName;
	NSData* _imageData;
	NSString* _type;
	unsigned long long _sharingAudience;
	CGRect _cropRect;

}

@property (nonatomic,copy) NSString * givenName;                              //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                             //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,retain) NSData * imageData;                              //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                 //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long sharingAudience;              //@synthesize sharingAudience=_sharingAudience - In the implementation block
@property (assign,nonatomic) BOOL didPersistImageToContact;                   //@synthesize didPersistImageToContact=_didPersistImageToContact - In the implementation block
-(NSString *)familyName;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)sharingAudience;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(BOOL)didPersistImageToContact;
-(void)setDidPersistImageToContact:(BOOL)arg1 ;
-(NSData *)imageData;
-(NSString *)type;
-(void)setImageData:(NSData *)arg1 ;
@end

