/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <NSCoding> {

	NSMutableDictionary* _store;

}

@property (nonatomic,retain) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
+(id)loadCredentialsFromAppDefaults;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)store;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(void)clearAllCredentials;
-(void)addCredentials:(id)arg1 ;
-(id)credentialsForHost:(id)arg1 ;
-(void)removeCredentials:(id)arg1 ;
@end

