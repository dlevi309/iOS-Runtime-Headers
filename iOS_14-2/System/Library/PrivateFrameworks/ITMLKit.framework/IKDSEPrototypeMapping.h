/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKAppPrototypeIdentifier, IKViewElement, NSIndexSet;

@interface IKDSEPrototypeMapping : NSObject {

	IKAppPrototypeIdentifier* _identifier;
	IKViewElement* _viewElement;
	NSIndexSet* _usageIndexes;

}

@property (nonatomic,readonly) IKAppPrototypeIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;                        //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * usageIndexes;                     //@synthesize usageIndexes=_usageIndexes - In the implementation block
+(id)prototypeMappingFromAppPrototype:(id)arg1 dataSourceElement:(id)arg2 elementFactory:(id)arg3 ;
-(IKAppPrototypeIdentifier *)identifier;
-(IKViewElement *)viewElement;
-(NSIndexSet *)usageIndexes;
-(id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3 ;
@end

