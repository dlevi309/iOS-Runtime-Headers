/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSPasswordBreachCredentialSource.h>

@class NSArray;

@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource> {

	NSArray* _credentials;

}

@property (nonatomic,readonly) NSArray * credentials; 
-(id)savedPasswordsForPersistentIdentifiers:(id)arg1 ;
-(id)initWithPasswords:(id)arg1 ;
-(NSArray *)credentials;
@end

