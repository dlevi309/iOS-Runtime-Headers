/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, NSString;

@interface CNComposeRecipients : NSObject <NSItemProviderReading> {

	NSArray* _recipients;

}

@property (nonatomic,copy,readonly) NSArray * recipients;              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)readableTypeIdentifiersForItemProvider;
-(NSArray *)recipients;
-(id)initWithRecipients:(id)arg1 ;
@end

