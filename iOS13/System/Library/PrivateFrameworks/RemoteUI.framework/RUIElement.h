/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


#import <RemoteUI/RemoteUI-Structs.h>
@class NSMutableDictionary, NSString, RUIStyle, NSDictionary;

@interface RUIElement : NSObject {

	NSMutableDictionary* _attributes;
	BOOL _enabled;
	NSString* _identifier;
	RUIStyle* _style;
	NSString* _body;
	RUIElement* _parent;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) RUIElement * parent;              //@synthesize parent=_parent - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(RUIElement *)parent;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)attributes;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)mutableAttributes;
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)setImage:(id)arg1 ;
-(BOOL)hasImage;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setImageSize:(CGSize)arg1 ;
-(id)sourceURL;
-(void)performAction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)loadImage;
-(void)setImageAlignment:(int)arg1 ;
-(void)configureView:(id)arg1 ;
-(id)_ruielement_staticValues;
-(id)staticValues;
-(id)_ruielement_staticFunctions;
-(id)staticFunctions;
-(OpaqueJSClassRef)_JSClass;
-(OpaqueJSValueRef)JSValueForContext:(OpaqueJSContextRef)arg1 ;
-(id)pageElement;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(id)subElementWithID:(id)arg1 ;
-(id)subElementsWithName:(id)arg1 ;
-(void)performAction:(int)arg1 forElement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2 ;
-(void)imageLoaded:(id)arg1 ;
-(int)_horizontalAlignmentForString:(id)arg1 ;
@end

