/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSIndexSet *)usageIndexes;
-(id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3 ;
-(IKViewElement *)viewElement;
@end

