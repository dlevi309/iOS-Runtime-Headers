/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)elementsForDocumentElement:(id)arg1 context:(id)arg2 ;
+(Class)elementClassByTagName:(id)arg1 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 ;
+(void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4 ;
+(BOOL)isDependentByTagName:(id)arg1 ;
-(id)elementForDOMElement:(id)arg1 parent:(id)arg2 ;
-(IKViewElementStyleFactory *)styleFactory;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(Class)elementClassByTagName:(id)arg1 ;
-(unsigned long long)elementTypeByTagName:(id)arg1 ;
-(id)initWithElementRegistry:(id)arg1 ;
-(void)setSparse:(BOOL)arg1 ;
-(BOOL)isSparse;
@end

