/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSNumber * failureType; 
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (getter=isSupportedProtocolVersion,nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
-(id)init;
-(NSArray *)actions;
-(NSDictionary *)responseDictionary;
-(id)_copyAccount;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)actionsWithActionType:(id)arg1 ;
-(NSNumber *)failureType;
-(BOOL)isSupportedProtocolVersion;
-(NSURL *)versionMismatchURL;
-(NSArray *)pingURLs;
-(id)_valueForProtocolKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

