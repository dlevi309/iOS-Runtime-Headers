/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSInvalidatable;
@class FBMainDisplayLayoutPublisher, NSString, FBSDisplayLayoutElement;

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding> {

	FBMainDisplayLayoutPublisher* _publisher;
	Class _elementClass;
	NSString* _identifier;
	NSString* _key;
	FBSDisplayLayoutElement* _element;
	long long _displayType;
	id<BSInvalidatable> _activeAssertion;

}

@property (nonatomic,readonly) long long displayType;                          //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) FBSDisplayLayoutElement * element;              //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) Class elementClass;                             //@synthesize elementClass=_elementClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(FBSDisplayLayoutElement *)element;
-(long long)displayType;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)updateWithBuilder:(/*^block*/id)arg1 ;
-(Class)elementClass;
-(void)deactivate;
-(void)activate;
-(void)activateWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)initWithDisplayType:(long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

