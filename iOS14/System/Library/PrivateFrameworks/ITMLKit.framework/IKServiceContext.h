/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSDictionary, IKViewElement;

@interface IKServiceContext : NSObject {

	NSDictionary* _contextDictionary;
	IKViewElement* _element;

}

@property (nonatomic,copy,readonly) NSDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (nonatomic,readonly) IKViewElement * element;                            //@synthesize element=_element - In the implementation block
-(IKViewElement *)element;
-(NSDictionary *)contextDictionary;
-(id)initWithContextDictionary:(id)arg1 element:(id)arg2 ;
@end

