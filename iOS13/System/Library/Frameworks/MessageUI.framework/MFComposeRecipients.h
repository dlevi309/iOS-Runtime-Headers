/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, NSString;

@interface MFComposeRecipients : NSObject <NSItemProviderReading> {

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

