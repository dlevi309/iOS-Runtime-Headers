/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNIdentifierProvider.h>

@class NSString;

@interface CNUuidIdentifierProvider : NSObject <CNIdentifierProvider> {

	NSString* _suffix;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)makeIdentifier;
-(id)initWithSuffix:(id)arg1 ;
@end

