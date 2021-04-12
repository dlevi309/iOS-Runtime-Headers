/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(unsigned long long)sharingAudience;
-(CGRect)cropRect;
-(void)setImageData:(NSData *)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)didPersistImageToContact;
-(void)setDidPersistImageToContact:(BOOL)arg1 ;
@end

