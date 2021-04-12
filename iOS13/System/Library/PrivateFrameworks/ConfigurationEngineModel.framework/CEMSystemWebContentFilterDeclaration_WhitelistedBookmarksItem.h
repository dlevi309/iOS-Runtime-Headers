/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemWebContentFilterDeclaration_WhitelistedBookmarksItem : CEMPayloadBase {

	NSString* _payloadURL;
	NSString* _payloadBookmarkPath;
	NSString* _payloadTitle;

}

@property (nonatomic,copy) NSString * payloadURL;                       //@synthesize payloadURL=_payloadURL - In the implementation block
@property (nonatomic,copy) NSString * payloadBookmarkPath;              //@synthesize payloadBookmarkPath=_payloadBookmarkPath - In the implementation block
@property (nonatomic,copy) NSString * payloadTitle;                     //@synthesize payloadTitle=_payloadTitle - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithURL:(id)arg1 withBookmarkPath:(id)arg2 withTitle:(id)arg3 ;
+(id)buildRequiredOnlyWithURL:(id)arg1 withTitle:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadURL;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadURL:(NSString *)arg1 ;
-(void)setPayloadTitle:(NSString *)arg1 ;
-(NSString *)payloadTitle;
-(NSString *)payloadBookmarkPath;
-(void)setPayloadBookmarkPath:(NSString *)arg1 ;
@end

