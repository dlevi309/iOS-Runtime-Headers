/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNContactRelationLocalizationProvider.h>

@protocol CNContactRelationLocalizationProvider <NSObject>
@required
+(id)preferredLanguages;
+(id)supplementalLabelURLPairsForLanguages:(id)arg1;

@end


@class NSString;

@interface CNContactRelationLocalizationProvider : NSObject <CNContactRelationLocalizationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferredLanguages;
+(id)supplementalLabelURLPairsForLanguages:(id)arg1 ;
@end

