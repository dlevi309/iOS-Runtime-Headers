/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@class NSString, CNContact;

@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider> {

	BOOL _containsContactImage;
	BOOL _containsMonogram;
	NSString* identifier;
	CNContact* _contact;

}

@property (nonatomic,readonly) CNContact * contact;                  //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL containsContactImage;              //@synthesize containsContactImage=_containsContactImage - In the implementation block
@property (assign,nonatomic) BOOL containsMonogram;                  //@synthesize containsMonogram=_containsMonogram - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(id)providerItemForContactImage:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 RTL:(BOOL)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 ;
-(BOOL)containsContactImage;
-(void)setContainsContactImage:(BOOL)arg1 ;
-(BOOL)containsMonogram;
-(void)setContainsMonogram:(BOOL)arg1 ;
@end

