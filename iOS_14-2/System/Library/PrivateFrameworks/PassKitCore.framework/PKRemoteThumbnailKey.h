/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface PKRemoteThumbnailKey : NSObject <NSCopying> {

	NSString* _requestIdentifier;
	NSDictionary* _requestDictionary;

}

@property (nonatomic,retain) NSString * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)isEqualToRemoteThumbnailKey:(id)arg1 ;
-(NSDictionary *)requestDictionary;
-(void)setRequestDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

