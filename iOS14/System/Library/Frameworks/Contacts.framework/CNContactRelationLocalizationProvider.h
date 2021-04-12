/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

