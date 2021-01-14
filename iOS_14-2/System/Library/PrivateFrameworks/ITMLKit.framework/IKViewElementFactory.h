/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject {

	struct {
		unsigned sparse : 1;
		unsigned parsingUpdatedTree : 1;
		unsigned parsingReorderedSiblings : 1;
		unsigned parsingPartOfPrototype : 1;
	}  _parsingFlags;
	IKViewElementRegistry* _elementRegistry;
	IKViewElementStyleFactory* _styleFactory;

}

@property (assign,getter=isSparse,nonatomic) BOOL sparse; 
@property (nonatomic,retain) IKViewElementStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
+(void)initialize;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
+(BOOL)elementsForDocumentElement:(id)arg1 context:(id)arg2 ;
+(Class)elementClassByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
+(BOOL)isDependentByTagName:(id)arg1 ;
-(BOOL)isSparse;
-(IKViewElementStyleFactory *)styleFactory;
-(id)elementForDOMElement:(id)arg1 parent:(id)arg2 ;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(Class)elementClassByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
-(id)initWithElementRegistry:(id)arg1 ;
-(void)setSparse:(BOOL)arg1 ;
@end

