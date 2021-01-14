/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface ENCredentialStore : NSObject <NSCoding> {

	NSMutableDictionary* _store;

}

@property (nonatomic,retain) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
+(id)loadCredentialsFromAppDefaults;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableDictionary *)store;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clearAllCredentials;
-(id)initWithCoder:(id)arg1 ;
-(void)addCredentials:(id)arg1 ;
-(id)credentialsForHost:(id)arg1 ;
-(void)removeCredentials:(id)arg1 ;
@end

