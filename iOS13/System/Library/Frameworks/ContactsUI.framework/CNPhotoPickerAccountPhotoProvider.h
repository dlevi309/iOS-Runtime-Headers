/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@class NSString, CNContact, CNContactViewCache;

@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider> {

	BOOL _includeUnifiedContactImages;
	NSString* identifier;
	CNContact* _contact;
	CNContactViewCache* _contactViewCache;

}

@property (nonatomic,readonly) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContactViewCache * contactViewCache;              //@synthesize contactViewCache=_contactViewCache - In the implementation block
@property (assign,nonatomic) BOOL includeUnifiedContactImages;                     //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(CNContactViewCache *)contactViewCache;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(id)initWithContact:(id)arg1 contactViewCache:(id)arg2 includeUnifiedContactImages:(BOOL)arg3 ;
-(BOOL)includeUnifiedContactImages;
-(void)setIncludeUnifiedContactImages:(BOOL)arg1 ;
@end

