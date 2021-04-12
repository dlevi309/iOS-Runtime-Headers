/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)actions;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)_valueForProtocolKey:(id)arg1 ;
-(NSArray *)pingURLs;
-(NSURL *)versionMismatchURL;
-(id)_copyAccount;
-(id)actionsWithActionType:(id)arg1 ;
-(NSNumber *)failureType;
-(BOOL)isSupportedProtocolVersion;
@end

