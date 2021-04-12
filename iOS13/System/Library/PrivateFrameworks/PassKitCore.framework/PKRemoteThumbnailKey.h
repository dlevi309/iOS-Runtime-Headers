/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)isEqualToRemoteThumbnailKey:(id)arg1 ;
-(NSDictionary *)requestDictionary;
-(void)setRequestDictionary:(NSDictionary *)arg1 ;
@end

