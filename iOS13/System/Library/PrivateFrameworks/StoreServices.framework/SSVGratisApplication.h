/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface SSVGratisApplication : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSString* _itemIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                     //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)bundleVersion;
-(NSNumber *)externalVersionIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
@end

