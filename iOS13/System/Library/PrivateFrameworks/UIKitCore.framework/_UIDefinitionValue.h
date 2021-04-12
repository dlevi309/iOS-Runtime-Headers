/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSAttributedString *)definition;
-(NSString *)term;
-(NSString *)longDefinition;
-(MAAsset *)rawAsset;
-(NSString *)localizedDictionaryName;
-(id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4 ;
-(void)setRawAsset:(MAAsset *)arg1 ;
@end

