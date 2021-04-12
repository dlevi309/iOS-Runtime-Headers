/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, CNContactStore, NSString;

@interface CNUIDraggingContacts : NSObject <NSItemProviderWriting, NSItemProviderReading> {

	NSArray* _draggingContacts;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) NSArray * draggingContacts;                                           //@synthesize draggingContacts=_draggingContacts - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)imageForDragging;
+(id)dragItemForContact:(id)arg1 withContactStore:(id)arg2 ;
+(BOOL)canAcceptDropForDropSession:(id)arg1 ;
+(void)provideContactsForDropSession:(id)arg1 withKeys:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)provideVCardURLForDropSession:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)contactsWithIdentifiers:(id)arg1 store:(id)arg2 keysToFetch:(id)arg3 unifyResults:(BOOL)arg4 error:(id*)arg5 ;
+(id)draggingContactsWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4 ;
+(id)draggingContactsForContacts:(id)arg1 contactStore:(id)arg2 ;
-(CNContactStore *)contactStore;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithDraggingContacts:(id)arg1 contactStore:(id)arg2 ;
-(NSArray *)draggingContacts;
-(void)setDraggingContacts:(NSArray *)arg1 ;
@end

