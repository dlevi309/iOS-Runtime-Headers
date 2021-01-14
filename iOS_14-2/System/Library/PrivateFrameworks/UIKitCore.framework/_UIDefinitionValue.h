/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSAttributedString, MAAsset;

@interface _UIDefinitionValue : NSObject {

	NSString* _localizedDictionaryName;
	NSString* _term;
	NSAttributedString* _definition;
	NSString* _longDefinition;
	MAAsset* _rawAsset;

}

@property (readonly) NSString * localizedDictionaryName;              //@synthesize localizedDictionaryName=_localizedDictionaryName - In the implementation block
@property (readonly) NSString * term;                                 //@synthesize term=_term - In the implementation block
@property (readonly) NSAttributedString * definition;                 //@synthesize definition=_definition - In the implementation block
@property (readonly) NSString * longDefinition;                       //@synthesize longDefinition=_longDefinition - In the implementation block
@property (nonatomic,retain) MAAsset * rawAsset;                      //@synthesize rawAsset=_rawAsset - In the implementation block
-(NSString *)term;
-(id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4 ;
-(MAAsset *)rawAsset;
-(id)description;
-(NSAttributedString *)definition;
-(NSString *)localizedDictionaryName;
-(NSString *)longDefinition;
-(void)setRawAsset:(MAAsset *)arg1 ;
@end

