/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCVegaJSDocumentInterface.h>

@class CCVegaHTMLElement, CCVegaRenderer;

@interface CCVegaJSDocument : NSObject <CCVegaJSDocumentInterface> {

	CCVegaRenderer* renderer;
	CCVegaHTMLElement* body;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer; 
@property (nonatomic,retain) CCVegaHTMLElement * body; 
-(void)setBody:(CCVegaHTMLElement *)arg1 ;
-(CCVegaHTMLElement *)body;
-(id)init;
-(CCVegaRenderer *)renderer;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(id)createElementWithString:(id)arg1 ;
@end

